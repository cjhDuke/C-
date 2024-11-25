#include<stdio.h>
#include<stdlib.h>
#define f(a,b) a*b
int main()
{
    float x=2,y=3,z;
    z=f(x,y);
    printf("%f\t",z);
    z=f(x*x+2*x-5,y+3);
    printf("%f\n",z);
    system("pause");
}