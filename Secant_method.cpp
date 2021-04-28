#include <iostream>
#include<cmath>
#define e 0.0001
using namespace std;

float func(float x)
{
    return (pow(x, 3) - x - 1);
}

void secant(float x1, float x2)
{
    float n = 0, xn, x, c;
    	cout<< "Iteration\tValue of x1\tValue of x2\tValue of root"<<endl<<endl;
    if (func(x1) * func(x2) < 0) {
        do
        {
            x = (x1 * func(x2) - x2 * func(x1)) / (func(x2) - func(x1));

            c = func(x1) * func(x);

            x1 = x2;
            x2 = x;

           cout <<n<<"\t\t"<<x1<<"\t\t"<<x2<<"\t\t"<<x<<endl;

            ++n;

            if (c == 0)
                break;
            xn = (x1 * func(x2) - x2 * func(x1)) / (func(x2) - func(x1));
            
            
        } while (fabs(xn - x) >= e);
		cout<<endl;
cout << "Root Value: " << x;
        cout << "No. of iterations = " << n << endl;
    } 
else
    cout << "Can not find a root in the given interval";
}

int main()
{
    float x1 = 1.3, x2 = 1.4;
    secant(x1, x2);
    return 0;
}

