#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int m,y;
    double r,s;
    printf("������������������Լ����������\n");
    scanf("%d%d",&m,&y);
    scanf("%lf",&r);
    s=pow(1+r,y)*m;
    printf("��Ϣ�ܺ�Ϊ:%f\n",s);
    system("pause");
}