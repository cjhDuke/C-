#include<stdio.h>
#include<math.h>
int main()
{
    float x,a=0,b=5,m,ya,yb,ym;
    ya=a*a+a*sin(a)-5;
    yb=b*b+b*sin(b)-5;
    do
    {
        m=(a+b)/2;
        ym=m*m+m*sin(m)-5;
        if(ym*ya<0)
        {
            b=m;
            yb=ym;
        }
        else
        {
            a=m;
            ya=ym;
        }
    }while(fabs(ym)>1e-5);
    printf("其中一个实根是:%f,此时方程的值是%f",m,ym);
}