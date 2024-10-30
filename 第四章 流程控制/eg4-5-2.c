#include<stdio.h>
int main()
{
    int x,y,z,max;
    scanf("%d%d%d",&x,&y,&z);
    max=x;
    if(z>y)
        if(z>x) max=z;
    else
        if(y>x) max=y;
    printf("%d",max);
}