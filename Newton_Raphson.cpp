#include<iostream>
#include<cmath>
#define e 0.001
using namespace std;

double func(double x)
{
    return ((x*x) - (4*x) - 7);
}

double derivFunc(double x)
{
    return 2*x - 4;
}

void newtonRaphson(double x)
{
	cout<< "Iteration\tValue of root"<<endl;
    double h = func(x) / derivFunc(x);
    int i=0;
    while (abs(h) >= e)
    {
        h = func(x)/derivFunc(x);
        x = x - h;
        cout << i+1 << "\t\t" << x << endl;
        ++i;
    }

   cout << "Root Value: " << x;
}

int main()
{
    double x = 5;
    newtonRaphson(x);
    return 0;
}
