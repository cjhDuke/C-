#include<stdio.h>
#include<stdlib.h>
#define f(a,b,c) a+b>c
int main()
{
    float x,y,z;
    scanf("%f%f%f",&x,&y,&z);
    if(f(x,y,z)&&f(x,z,y)&&f(y,z,x)) printf("yes\n");
    else printf("no\n");
    system("pause");
}