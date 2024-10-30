#include<stdio.h>
int main()
{
    float t;
    printf("请输入百分制成绩:");
    scanf("%f",&t);
    if(t<60) printf("E");
    if(t<70) printf("D");
    if(t<80) printf("C");
    if(t<90) printf("B");
    else printf("A");
        
}