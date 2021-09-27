#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f(double x);
double f(double x)
{
    double a = pow(x, 3) - x - 11.0;
    return a;
}
int main()
{
    cout.precision(4);
    cout.setf(ios::fixed); //set the precision of the output
    double a, b, c, e;
    cout << "Enter the initial guess\na=";
    cin >> b;
    cout << "b=\n"; 
    cin >> c;
    cout << "Enter the degree of accuracy\n";
    cin >> e;
    do
    {
        a = b;
        b = c;                                 
        c = b - (b - a) / (f(b) - f(a)) * f(b); 
        if (f(c) == 0)
        {
            cout << "\nThe root of the equation is " << c; 
            return 0;
        }
    } while (abs(c - b) >= e);                     
    cout << "\nThe root of the equation is " << c;
    return 0;
}