#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入A,B:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("较大数是:%d",a);
    else
    printf("较大数是:%d",b);
}