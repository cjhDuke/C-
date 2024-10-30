#include<stdio.h>
int main()
{
    int n=0;
    float x,sum=0;
    for(int i=1;i<=10;i++)
    {
        scanf("%f",&x);
        if(x<0)
        {
            continue;
        }
        else
        {
            sum+=x;
            n++;
        }
    }
    printf("总和=%f,平均数=%f",sum,sum/n);
}