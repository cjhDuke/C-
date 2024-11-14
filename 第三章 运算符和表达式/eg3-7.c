#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b,c,max,min,mid;
    scanf("%f%f%f",&a,&b,&c);
    max=(max=a>b?a:b)>c?max:c;
    min=(min=a<b?a:b)<c?min:c;
    mid=a+b+c-max-min;
    printf("%f %f %f",max,mid,min);
    system("pause");
}