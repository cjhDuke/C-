#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float deg=0;
    while(deg!=60)
    {
        printf("sin(%.6f)=%.6f\n",deg,sin(deg*3.141593/180));
        deg=deg+0.6;
    }
    system("pause");
}
//�޷�ִ�У���ѭ����ʵ�������޷�׼ȷ��ʾ0.6����ѭ����deg�޷�׼ȷ��ֵ��60�������һֱִ�У����ĳ�deg<=60���