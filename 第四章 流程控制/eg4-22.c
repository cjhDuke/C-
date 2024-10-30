#include<stdio.h>
#include<math.h>
int main()
{
    double x0,x1,a;
    scanf("%lf",&a);
    x0=6.5;
    while(1)
    {
        x1=(x0+a/x0)/2;//平方根迭代公式
        if(fabs(x0-x1)<1e-10) break;
        x0=x1;
    }
    printf("%.10f\n",x1);
}