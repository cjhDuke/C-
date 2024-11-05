#include<stdio.h>
int main()
{
    float e,n=1,x;
    printf("请给定精度x:");
    scanf("%f",&x);
    for(int i=1;n>=x;i++)
    {
        e+=n;
        n/=i;
    }
    printf("%f",e);
}