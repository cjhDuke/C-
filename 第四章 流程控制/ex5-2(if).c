#include<stdio.h>
int main()
{
    float t;
    printf("������ٷ�ֵ�ĳɼ�t=");
    scanf("%f",&t);
    if(t<60) printf("E");
    else if(t<70) printf("D");
    else if(t<80) printf("C");
    else if(t<90) printf("B");
    else printf("A");
        
}
