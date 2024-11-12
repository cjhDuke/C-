#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int m,y;
    double r,s;
    printf("请输入贷款数，年数以及年贷款利率\n");
    scanf("%d%d",&m,&y);
    scanf("%lf",&r);
    s=pow(1+r,y)*m;
    printf("本息总和为:%f\n",s);
    system("pause");
}