#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[5][9]={"zhangsan","lisi","wangwu","zhaoliu","liuqi"};
    int i;
    for(i=0;i<5;i++)
    {
        puts(name[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",name[i]);
    }
    system("pause");
}