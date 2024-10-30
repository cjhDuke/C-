#include<stdio.h>
int main()
{
    int num,n=0;
    scanf("%d",&num);
    num=num>0?num:-num;
    do
    {
        n++;
        num/=10;
    }while(num!=0);
    printf("%d",n);
}