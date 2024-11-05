#include<stdio.h>
int main()
{
    float x;
    int a=0,b=0,c=0;
    while(scanf("%f",&x)!=EOF)
    {
        if(x<0) a++;
        else if(x==0) b++;
        else if(x>0) c++;
    }
    printf("负数有:%d个，零有:%d个，正数有:%d个",a,b,c);
}