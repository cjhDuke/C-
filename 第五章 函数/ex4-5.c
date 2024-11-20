#include<stdio.h>
#include<stdlib.h>
void f(int,int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    f(a,b);
    system("pause");
}
void f(int a,int b)
{
    int min,yueshu,beishu;
    min=(a<b)?a:b;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0) yueshu=i;
    }
    beishu=a*b/yueshu;
    printf("最大公约数:%d 最小公倍数:%d\n",yueshu,beishu);
}