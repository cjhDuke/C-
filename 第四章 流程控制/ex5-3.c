#include<stdio.h>
int main()
{
    float score,max=-1;
    for(int i=1;i<=10;i++)
    {
        scanf("%f",&score);
        max=(score>max)?score:max;
    }
    printf("%f",max);
}