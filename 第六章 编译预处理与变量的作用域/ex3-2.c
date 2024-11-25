#include<stdio.h>
#include<stdlib.h>
int func1()
{
    static int s=1;
    s+=2;
    return s;
}
int func2()
{
    int s=1;
    s+=2;
    return s;
}
int main()
{
    int i;
    for(i=0;i<2;i++) printf("func1=%d  ",func1());
    printf("\n");
    for(i=0;i<2;i++) printf("func2=%d  ",func2());
    system("pause");
}
