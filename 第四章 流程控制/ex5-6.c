#include<stdio.h>
#include<string.h>
int main()
{
    float n;
    int a,b;
    scanf("%f",n);
    while((int)n%10!=0)
    {
        n/=10;
        a++;
    }
}