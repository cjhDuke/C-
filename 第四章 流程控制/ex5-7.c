#include<stdio.h>
#include<math.h>
int main()
{
    float n,x=1,y;
    scanf("%f",&n);
    for(int i=1;i<n;i++)
    {
        x=sqrt(n);
        y=sqrt(n-i+x);
    }
    printf("%f",y);
}