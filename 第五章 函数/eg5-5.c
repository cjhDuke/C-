#include<stdio.h>
#include<stdlib.h>
int htol(int n);
int main()
{
    int m;
    while(scanf("%d",&m)!=EOF)
    {
        printf("%d",htol(m));
    }
}
int htol(int n)
{
    int k=0;
    while(n)
    {
        k=k*10+n%10;
        n=n/10;
    }
    return k;
}