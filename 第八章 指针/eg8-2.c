#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,*s;//pΪ����ָ��δ��ֵ
    for(i=1;i<100;i++)
    {
        *s=*s+i;
    }
    printf("%d\n",*s);
    system("pause");
}