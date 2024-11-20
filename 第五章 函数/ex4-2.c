#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isprime(int,int);
int main()
{
    int a,b;
    scanf("%d%d",&b,&a);
    if(isprime(a,b)) printf("ÊÇ");
    else printf("·ñ");
    system("pause");
}
int isprime(int a,int b)
{
    if(a>b)
    {
        return 0;
    }
    else
    {
        for(int i=2;i<=sqrt(a);i++)
        {
            if(a%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}