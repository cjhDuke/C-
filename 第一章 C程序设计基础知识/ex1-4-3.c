#include<stdio.h>
int main()
{
    float r,h,pi=3.14,v;
    printf("请分别输入圆柱体的半径r和高h:\n");
    scanf("%f%f",&r,&h);
    v=pi*r*r*h;
    printf("圆柱体体积是:%f",v);
}