#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a[10],ave=0;int i;
    for(i=0;i<10;i++) scanf("%f",a+i);
    for(i=0;i<10;i++) ave=ave+*(a+i);
    ave/=10; printf("ƽ��ֵΪ%f\n",ave);
    for(i=0;i<10;i++) if(*(a+i)>ave) printf("%f\t",*(a+i));
    printf("\n");
    system("pause");
}