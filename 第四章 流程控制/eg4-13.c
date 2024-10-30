#include<stdio.h>
int main()
{
    int sum=0,x;
    for(;;)
    {
        scanf("%d",&x);
        if(x<0)
        {
            break;
        }
        else
        {
            sum+=x;
        }
    }
    printf("%d",sum);
}