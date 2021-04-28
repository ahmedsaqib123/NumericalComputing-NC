#include<iostream>
#include<cmath>
using namespace std;

int n=0;

double func(double x)
{
    return ((x*x) - 6);
}

void regulaFalsi(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b" << endl;
        return;
    }

    double c = a;
	cout<< "Iteration\tValue of a\tValue of b\tValue of root"<<endl;
    for (int i=0; i < n; i++)
    {
        c = (a*func(b) - b*func(a))/(func(b) - func(a));

        if (func(c)==0)
        break;
        
        else if (func(c)*func(a) < 0)
        b = c;
        
        else
        a = c;
        cout <<i+1<<"\t\t"<<a<<"\t\t"<<b<<"\t\t"<<c<<endl;
    }
    cout << "The value of root is : " << c;
}
int main()
{
    cout << "Enter number of iterations: ";
    cin >> n;
    double a = 3, b = 2;
    regulaFalsi(a, b);
    return 0;
}
