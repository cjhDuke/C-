#include<stdio.h>
int main()
{
    int n,k=2;
    scanf("%d",&n);
    printf("%d=",n);
    while(n>1)
    {
        if(n%k==0)
        {
            printf("%d*",k);
            n/=k;
        }
        else
        k++;
    }
    printf("\b \n");
}