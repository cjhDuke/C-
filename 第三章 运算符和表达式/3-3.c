#include<stdio.h>
int main()
{
    int a=2,b=2,c;
    c=++a+b--; printf("a=%d,b=%d,c=%d\n",a,b,c);
    c=-a---b; printf("a=%d,b=%d,c=%d\n",a,b,c);
    printf("a=%d\t",a++);
    printf("b=%d\t",++b);
    c=a+b; printf("c=%d\n",c);
    return 0;
}