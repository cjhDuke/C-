#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x[30],y[30];
    int i,n;
    printf("请输入需要处理的数据个数:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%f",&x[i]);
    y[0]=x[0]; y[n-1]=x[n-1];
    for(i=1;i<n-1;i++) y[i]=(x[i-1]+x[i]+x[i+1])/3;
    for(i=0;i<n;i++) printf("%f\t",y[i]);
    printf("\n");
    system("pause");
}