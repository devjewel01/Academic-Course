#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001


double Function(double x)
{
	return x*x*x - x*x + 2;
}

void bisection(double a, double b)
{
	if (Function(a) * Function(b) >= 0)
	{
		cout << "You have not assumed right a and b\n";
		return;
	}

	double c = a;
	while ((b-a) >= EPSILON)
	{
		c = (a+b)/2;

		if (Function(c) == 0.0)
			break;

		if(Function(c)*Function(a) < 0)
			b = c;
		else
			a = c;
	}
	cout << "The value of root is : " << c;
}


int main()
{
	double a =-200, b = 300;
	bisection(a, b);
	return 0;
}
