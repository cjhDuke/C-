#include<stdio.h>
#include<stdlib.h>
void fun1(int n,int i)
{
    if(n==1)
        printf("\b \n");
    else
    {
        if(n%i==0)
        {
            printf("%d*",i);
            n/=i;
        }
        else i++;
        fun1(n,i);
    }
}
int main()
{
    fun1(64280,2);
    system("pause");
}