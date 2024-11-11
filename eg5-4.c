#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int isprime(int n)
{
    int i;
    if(n<2) return 0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int k,n=0;
    for(k=2;k<=100;k++)
    {
        if(isprime(k))
        {
            printf("%5d",k);
            n++;
            if(n%10==0)
            {
                printf("\n");
            }
        }
    }
    system("pause");
}