#include<stdio.h>
#include<math.h>
 

double f(double x)
{
  return x*x*x-27;
}
 
double df(double x)
{
  return 3*x*x;
}
 

double rootNR(double f(double x),double df(double x),double x1,double eps,double maxSteps)
{
  double x;
  int i=1;
  do{
    x=x1;
    if(fabs(df(x))>=0.000000001)
    {
      x1=x-f(x)/df(x);
      i++;
    }
  }while(fabs(x-x1)>=eps&&i<=maxSteps);
  return x1;
}
 

double printNR(double f(double x),double df(double x),double x1,double eps,double maxSteps){
  double x;
  int iter=1;
  printf("___________________________________________________________________________________________________\n");
  printf("iter\tx\t\tf(x)\t\tf'(x)\t\tx1\t\t|x-x1|\t\tf(x1)\n");
  printf("___________________________________________________________________________________________________\n");
  do{
    x=x1;
    if(fabs(df(x))>=0.000000001)
    {
      x1=x-f(x)/df(x);
      printf("%d.\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",iter,x,f(x),df(x),x1,fabs(x-x1),f(x1));
      iter++;
    }
  }while(fabs(x-x1)>=eps&&iter<=maxSteps);
  return x1;
}
int main()
{
  double x,eps,x1;
  int maxSteps;
  printf("\nEnter the initial guess : ");
  scanf("%lf",&x);
  printf("\nEnter the desired accuracy : ");
  scanf("%lf",&eps);
  printf("\nEnter the max. number of steps : ");
  scanf("%d",&maxSteps);
  printf("__________________________________________________________________________________________________\n\nOne of the roots of the given equation is:\n\n%lf\n\n\n",printNR(f,df,x,eps,maxSteps));
  return 0;
}