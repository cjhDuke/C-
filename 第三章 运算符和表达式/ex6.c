#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b,l,s;
    scanf("%f%f",&a,&b);
    l=2*(a+b);
    s=a*b;
    printf("周长=%f 面积=%f",l,s);
    system("pause");
}