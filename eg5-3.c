#include<stdio.h>
#include<stdlib.h>
int f(int x);
int main()
{
    int a,b,c;
    for(a=6;a<=10000;a++)
    {
        b=f(a);
        c=f(b);
        if(a==f(b)&&a!=b)
        {
            printf("%d  %d\n",a,b);
        }
    }
    system("pause");
}
int f(int x)
{
    int y=0,i;
    for(i=1;i<=x/2;i++)
    {
        if(x%i==0) y+=i;
    }
    return y;
}