#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
        if(n%i==0) break;
    if(i>n/2)
        printf("%d是素数\n",n);
    else
        printf("%d不是素数\n",n);
}