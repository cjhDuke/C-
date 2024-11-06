#include<stdio.h>
#include<math.h>
int main()
{
    int x,n;
    float m,sum;
    printf("x=");
    scanf("%d",&x);
    printf("n=");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        float a;
        printf("a(%d)=",i);
        scanf("%f",&a);
        m=a*pow(x,i);
        sum+=m;
    }
    printf("f(x)=%f",sum);
}