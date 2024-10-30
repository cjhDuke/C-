#include<stdio.h>
float min(float x,float y)
{
    float m;
    if(x<y)
        m=x;
    else
        m=y;
    return m;
}
int main()
{
    float a,b,c,t,mindata;
    printf("请输入三个数:\n");
    scanf("%f%f%f",&a,&b,&c);
    t=min(a,b);
    mindata=min(t,c);
    printf("最小数:%.2f\n",mindata);
}