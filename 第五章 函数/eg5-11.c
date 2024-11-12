#include<stdio.h>
#include<stdlib.h>
float f11(float x,int n)
{
    return (n==0)?1:x*f11(x,n-1);
}
int main()
{
    printf("%f,%f\n",f11(1.1,3),f11(-3.45,4));
    system("pause");
}