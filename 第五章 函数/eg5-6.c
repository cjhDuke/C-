#include<stdio.h>
void sawp(float x,float y)
{
    float temp;
    temp=x; x=y; y=temp;
    printf("x=%.2f y=%.2f\n",x,y);
}
int main()
{
    float a=10,b=5;
    sawp(a,b);
    printf("a=%.2f b=%.2f",a,b);
}
//形参的改变不会导致实参的改变