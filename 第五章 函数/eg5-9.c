#include<stdio.h>
int f1(int n)
{
    if(n<2)
        return 1;
    else
        return n*f1(n-1);
}
int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n),!(m>=n&&n>=0));
    printf("%d\n",f1(m)/f1(n)/f1(m-n));
}