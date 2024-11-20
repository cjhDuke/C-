#include<stdio.h>
#include<stdlib.h>
int digit(int,int);
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d",digit(n,k));
    system("pause");
}
int digit(int n,int k)
{
    for(int i=1;i<=k-1;i++)
    {
        n/=10;
    }
    return n%10;
}