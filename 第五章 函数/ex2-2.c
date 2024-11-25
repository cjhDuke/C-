#include<stdio.h>
#include<stdlib.h>
int f(int m,int n)
{
    if(m%n==0) return n;
    else return f(n,m%n);
}
int main()
{
    printf("%d\n",f(840,48));
    system("pause");
}