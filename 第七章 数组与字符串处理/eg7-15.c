#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[81];
    int i=0,k=0;
    gets(str);
    for(;i<strlen(str);i++)
    {
        if(str[i]==' ') k++;
    }
    printf("输入字符串中的空格字符个数为:%d\n",k);
    system("pause");
}