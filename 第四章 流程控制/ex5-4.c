#include<stdio.h>
int main()
{
    float e=1,n=1,x;
    printf("请给定精度x:");
    scanf("%f",&x);
    for(int i=1;n>=x;i++)
    {
        n/=i;
        e+=n;
    }
    printf("%f",e);
}