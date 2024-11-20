#include<stdio.h>
#include<stdlib.h>
int wanshu(int);
int main()
{
    for(int i=1;i<=1000;i++)
    {
        if(wanshu(i)) printf("%d ",i);
    }
    system("pause");
}
int wanshu(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0) sum+=i;
    }
    if(sum==n) return 1;
    else return 0;
}