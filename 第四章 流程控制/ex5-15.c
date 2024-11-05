#include<stdio.h>
#include<math.h>
int main()
{
    float x,a=0,b=5,m,ya,yb,ym;
    m=(a+b)/2;
    ya=a*a+a*sin(a)-5;
    yb=b*b+b*sin(b)-5;
    ym=m*m+m*sin(m)-5;
    while(fabs(ym)>1e-5)
    {
        ym=m*m+m*sin(m)-5;
        if(ym*ya<0)
        {
            m=(m+a)/2;
        }
        else
        {
            m=(m+b)/2;
        }
    }
    printf("其中一个实根是:%f,此时方程的值是%f",m,ym);
}