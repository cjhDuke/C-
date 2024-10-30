#include<stdio.h>
int main()
{
    float sum=0,a;
    for(int i=1;i<=10;i++)
    {
        scanf("%f",&a);
        sum+=a;
    }
    printf("sum=%f\n",sum);
}