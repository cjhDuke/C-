#include<stdio.h>
#include<math.h>
int main()
{
    float x,t,y;
    int i;
    scanf("%f",&x);
    y=1;t=1;i=1;
    while(fabs(t)>=1e-5)
    {
        t=t*x/i;
        y=y+t;
        i++;
    }
    printf("%f",y);
}