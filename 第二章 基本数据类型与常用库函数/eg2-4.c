#include<stdio.h>
#include<stdlib.h>
#define PI 3.14159
int main()
{
    double s1,s2,s3;
    float r1,r2,r3;
    printf("Please input r1,r2,r3:");
    scanf("%f%f%f",&r1,&r2,&r3);
    s1=PI*r1*r1;
    s2=PI*r2*r2;
    s3=PI*r3*r3;
    printf("s1=%f s2=%f s3=%f",s1,s2,s3);
    system("pause");
}