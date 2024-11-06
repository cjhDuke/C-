#include<stdio.h>
int main()
{
    int x,y,yueshu,beishu;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    int max=(x>y)?x:y;
    for(int i=1;i<=max;i++)
    {
        if(x%i==0&&y%i==0)
        {
            yueshu=i;
        }
    }
    beishu=x*y/yueshu;
    printf("最大公约数=%d,最小公倍数=%d",yueshu,beishu);
}