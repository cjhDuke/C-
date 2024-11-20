#include<stdio.h>
#include<stdlib.h>
float max(float,float,float);
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("%f",max(a,b,c));
    system("pause");
}
float max(float a,float b,float c)
{
    float max=a;
    max=(max>b)?max:b;
    max=(max>c)?max:c;
    return max;
}