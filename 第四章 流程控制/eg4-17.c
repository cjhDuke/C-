#include<stdio.h>
int main()
{
    int sum=0;
    char ch;
    do
    {
        ch=getchar();
        sum+=ch;
    } while (ch!='\n');
    printf("%d",sum);
}