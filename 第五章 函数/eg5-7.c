#include<stdio.h>
void f3(char ch,int n)
{
    for(int i=1;i<=n;i++) putchar(ch);
    putchar('\n');
}
int main()
{
    char x='A';
    f3('*',10);
    f3('\007',6);
    f3(++x,x);
}