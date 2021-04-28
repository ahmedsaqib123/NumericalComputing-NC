#include<iostream>
#include<cmath>
using namespace std;
#define e 0.01

double func(double x)
{
    return ((x*x) - 6);
}
void bisection(double a, double b)
{
    if (func(a)*func(b) >= 0)
    {
        cout << "Asumption of the values are incorrect!" << endl;
        return;
    }

    double x = a;
    int i=0;
	cout<< "Iteration\tValue of a\tValue of b\tValue of root"<<endl;
    while (abs(b-a) >= e)
    {
        x = (a+b)/2;

        if (func(x) == 0.0)
        break;
        
        else if (func(x)*func(a) < 0)
        b = x;
        
        else
        a = x;
		cout <<i+1<<"\t\t"<<a<<"\t\t"<<b<<"\t\t"<<x<<endl;
        i++;
    }
    cout<<endl;
    cout << "Root Value: " << x;
}

int main()
{
    double a =3, b = 2;
    bisection(a, b);
    return 0;
}
