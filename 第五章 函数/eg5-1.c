#include<stdio.h>
int fact(int k)
{
    int i,y=1;
    for(i=2;i<=k;i++) y*=i;
    return y;
}
int main()
{
    int i,j;
    for (i=0;i<10;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d\t",fact(i)/fact(j)/fact(i-j));
        }
        printf("\n");
    }
}