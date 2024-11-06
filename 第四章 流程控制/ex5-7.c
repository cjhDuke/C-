#include<stdio.h>
#include<math.h>
int main()
{
    float n,x=1,y;
    scanf("%f",&n);
    x=sqrt(n);
    for(int i=1;i<n;i++)
    {
        x=sqrt(n-i+x);
    }
    printf("%f",x);
}