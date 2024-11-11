#include<stdio.h>
void prnLine(int m,int n,char c)
{
    int i;
    for(i=1;i<=m;i++) putchar(' ');
    for(i=1;i<=n;i++) putchar(c);
    putchar('\n');
}
int main()
{
    int i;
    for(i=1;i<=4;i++) prnLine(6-1,2*i-1,'*');
    for(i=1;i<=3;i++) prnLine(3,5,'#');
}