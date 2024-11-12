#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=1;
    while(i<=20)
    {
        printf("\007");
        i=i+1;
    }
    printf("\\欢迎使用Visual C++ 6.0\\\n");
    system("pause");
}