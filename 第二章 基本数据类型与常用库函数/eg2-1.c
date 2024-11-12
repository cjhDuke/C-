#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=1,n;
    double jc=1;
    scanf("%d",&n);
    while(i<=n)
    {
        jc=jc*i;
        i=i+1;
    }
    printf("%d!=%.0f\n",n,jc);
    system("pause");
}