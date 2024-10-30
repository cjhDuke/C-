#include<stdio.h>
int main()
{
    int n;
    float max=0,a;
    printf("请输入要比较的数据个数：");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("请输入第%d个数:",i);
        scanf("%f",&a);
        max=max>a?max:a;
    }
    printf("最大的数是:%f",max);
    return 0;
}