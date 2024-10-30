#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    printf("请输入x的值:");
    scanf("%f",&x);
    if(x<=1&&x>=0)
    {
        y=x+cos(x);
    }
    else
    {
        y=x+sin(x);
    }
    printf("y=%f",y);
}