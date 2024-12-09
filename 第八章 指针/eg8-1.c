#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a[10]={1,2,3,4,5},x,*p1=&x,*p2=a,*p3;
    printf("%x %x %x\n",&p1,&p2,&p3);
    printf("%x %x\n",p1,p2);
    printf("%x %x\n",&x,a);
    system("pause");
}