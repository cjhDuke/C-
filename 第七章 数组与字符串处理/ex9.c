#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[60],b[60],c[60],d[60];
    int len_a=0,len_b=0,len_c=0,len_d=0;
    printf("请连续输入四行字符:\n");
    while(len_a<60)
    {
        char ch=getchar();
        if(ch=='\n') break;
        if(ch=='$') continue;
        else a[len_a]=ch;
        len_a++;
    }
    while(len_b<60)
    {
        char ch=getchar();
        if(ch=='\n') break;
        if(ch=='$') continue;
        else b[len_b]=ch;
        len_b++;
    }
    while(len_c<60)
    {
        char ch=getchar();
        if(ch=='\n') break;
        if(ch=='$') continue;
        else c[len_c]=ch;
        len_c++;
    }
    while(len_d<60)
    {
        char ch=getchar();
        if(ch=='\n') break;
        if(ch=='$') continue;
        else d[len_d]=ch;
        len_d++;
    }
    printf("\n");
    for(int i=0;i<len_a;i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    for(int i=0;i<len_b;i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");
    for(int i=0;i<len_c;i++)
    {
        printf("%c",c[i]);
    }
    printf("\n");
    for(int i=0;i<len_d;i++)
    {
        printf("%c",d[i]);
    }
    printf("\n");
    system("pause");
}