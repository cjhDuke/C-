#include<stdio.h>
int main()
{
    float sum=0,x;
    while(1)
    {
        scanf("%f",&x);
        if(x==EOF) break;
        else sum+=x;
    }
    printf("%f",sum);
}