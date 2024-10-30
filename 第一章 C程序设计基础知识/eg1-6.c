#include<stdio.h>
int main()
{
    int a,b,c;
    printf("请输入A,B:\n");
    scanf("%d%d",&a,&b);
    c=a;a=b;b=c;
    printf("A=%d B=%d",a,b);
}