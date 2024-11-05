#include<stdio.h>
int main()
{
    double y,x=-2,max,min;
    y=x*x-3.14*x-6;
    max=min=y;
    for(double x=-1.5;x<=2;x+=0.5)
    {
        y=x*x-3.14*x-6;
        if(y>max) max=y;
        else if(y<min) min=y;
    }
    printf("最大值是:%lf,最小值是:%lf",max,min);
}