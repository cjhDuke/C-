#include<stdio.h>
#include<stdlib.h>
int fun1(int);
int main()
{
    int n;
    while(scanf("%d",&n),n>0)
    if(fun1(n)) printf("%d中各位数字按从小到大排序\n",n);
    system("pause");
}
int fun1(int m)
{
    int k;
    k=m%10;
    while(m)
    {
        if(m/10%10>k) return 0;
        else
        {
            m/=10;
            k=m%10;
        }
        return 1;
    }
}