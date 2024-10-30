#include<stdio.h>
int main()
{
    float t;
    printf("请输入百分制成绩:");
    scanf("%f",&t);
    switch((int)t/10)
    {
        case 10:
        case 9:printf("A");break;
        case 8:printf("B");break;
        case 7:printf("C");break;
        case 6:printf("D");break;
        default:printf("E");break;
    }
}
