#include<stdio.h>
#include<math.h>
double sum(double,double,double),f(double);
int main()
{
    printf("%.10f\n",sum(1,5,1e-8));
}
double sum(double a,double b,double eps)
{
    int i,n=4;
    double h,x,s1=0,s2;
    while(1)
    {
        h=(b-a)/n;
        x=a;
        s2=0;
    for(i=1;i<=n;i++)
    {
        s2+=(f(x)+f(x+h))*h/2;
        x+=h;
    }
    if(fabs(s1-s2)>eps)
    {
        s1=s2;
        n*=2;
    }
    else break;
    }
    return s2;
}
double f(double x)
{
    return pow(sin(x),3)+1;
}