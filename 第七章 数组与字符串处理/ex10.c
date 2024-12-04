#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char a[60],b[60],c[60],d[60];
    int len_a=0,len_b=0,len_c=0,len_d=0;
    printf("请连续输入四行字符:\n");
    while(len_a<60)
    {
        char ch=getchar();
        if(ch=='\n') break;
        a[len_a]=ch;
        len_a++;
    }
    while(len_b<60)
    {
        char ch=getchar();
        if(ch=='\n') break;
        b[len_b]=ch;
        len_b++;
    }
    while(len_c<60)
    {
        char ch=getchar();
        if(ch=='\n') break;
        c[len_c]=ch;
        len_c++;
    }
    while(len_d<60)
    {
        char ch=getchar();
        if(ch=='\n') break;
        d[len_d]=ch;
        len_d++;
    }
    printf("\n");
    for(int i=0;i<len_a;i++)
    {
        if(a[i]==' ')
        {
            for(int j=i+1;j<len_a;j++)
            {
                if(a[j]>='a'&&a[j]<='z') 
                {
                    a[j]=toupper(a[j]);
                    break;
                }
            }
        }
        printf("%c",a[i]);
    }
    printf("\n");
    for(int i=0;i<len_b;i++)
    {
        if(b[i]==' ')
        {
            for(int j=i;j<len_b;j++)
            {
                if(b[j]>='a'&&b[j]<='z') 
                {
                    b[j]=toupper(b[j]);
                    break;
                }
            }
        }
        printf("%c",b[i]);
    }
    printf("\n");
    for(int i=0;i<len_c;i++)
    {
        if(c[i]==' ')
        {
            for(int j=i;j<len_c;j++)
            {
                if(c[j]>='a'&&c[j]<='z') 
                {
                    c[j]=toupper(c[j]);
                    break;
                }
            }
        }
        printf("%c",c[i]);
    }
    printf("\n");
    for(int i=0;i<len_d;i++)
    {
        if(d[i]==' ')
        {
            for(int j=i;j<len_d;j++)
            {
                if(d[j]>='a'&&d[j]<='z') 
                {
                    d[j]=toupper(d[j]);
                    break;
                }
            }
        }
        printf("%c",d[i]);
    }
    system("pause");
}