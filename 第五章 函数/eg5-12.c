#include<stdio.h>
#include<stdlib.h>
void pri()
{
    char ch;
    if((ch=getchar())!='\n') pri();
    putchar(ch);
}
int main()
{
    pri();
    system("pause");
}