#include<stdio.h>
#include<math.h>
int main()
{
    double x0=-0.7,x1;
    int n=0;
    while(1) 
    {
        n++;
        x1=x0-(exp(-x0)-x0)/(-exp(-x0)-1);
        if(fabs(x0-x1)<1e-8) break;
        x0=x1;
    }
    printf("迭代次数为：%d   解为：%.8f",n,x1);
}