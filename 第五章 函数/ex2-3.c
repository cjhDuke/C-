#include<stdio.h>
#include<stdlib.h>
int f1(int,int),f11(int);
void f2(int);
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        f2((5-i)*3);
        for(j=0;j<=i;j++)
        {
            printf("%3d",f1(i,j));
        }
        putchar('\n');
    }
    system("pause");
}
int f1(int m,int n)
{
    return f11(m)/f11(n)/f11(m-n);
}
int f11(int k)
{
    if(k<=1) return 1;
    return k*f11(k-1);
}
void f2(int n)
{
    for(int i=1;i<=n;i++) putchar(' ');
}