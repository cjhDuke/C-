#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a,b,c;
    char p;
    scanf("%lf%c%lf",&a,&p,&b);
    switch(p)
    {
        case '+':c=a+b;break;
        case '-':c=a-b;break;
        case '*':c=a*b;break;
        case '/':c=a/b;break;
        default:printf("请输入正确的算式！！"); return 0;
    }
    printf("%lf%c%lf=%lf",a,p,b,c);
}