#include<bits/stdc++.h>
using namespace std;

#define  f(x)  ( cos(x) - x * exp(x) )

int main()
{
	 float a, b, c, fa, fb, fc, e;
	 int step = 1;
	 
	start:
	printf("\nEnter two initial guesses:\n");
	cin>>a>>b;
	printf("Enter tolerable error:\n");
	cin>>e;
	 
	 fa = f(a);
	 fb = f(b);


	 if( fa*fb > 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		  goto start;
	 }


	 printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	 do
	 {
		  c = (a + b)/2;
		  fc = f(c);
		
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step, a, b, c, fc);
		
		  if( fa * fc < 0)
		  {
			   b = c;
			   fb = fc;
		  }
		  else
		  {
			   a = c;
			   fa = fc;
		  }
		  step = step + 1;
	 }
	 while(fabs(fc)>e);

	 printf("\nRoot is: %f", c);
	 return 0;
}