#include<stdio.h>
#include<stdlib.h>
int f10(int n)
{
    return (n==1||n==2)?1:f10(n-1)+f10(n-2);
}
int main()
{
    int m;
    scanf("%d",&m);
    printf("%d\n",f10(m));
    system("pause");
}