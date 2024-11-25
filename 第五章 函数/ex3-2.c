#include<stdio.h>
#include<stdlib.h>
void f10_2(int n)
{
    if(n<=0) return;
    else
    {
        f10_2(n/2);
        printf("%d",n%2);
    }
}
int main()
{
    f10_2(11);putchar('\n');
    f10_2(35);putchar('\n');
    system("pause");
}