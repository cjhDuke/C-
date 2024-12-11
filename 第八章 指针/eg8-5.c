#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
    int x[N][N],i,j,*px[N],**px2;
    for(i=0;i<N;i++) px[i]=x[i];
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            *(px[i]+j)=i+j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++) printf("%4d",px[i][j]);
        putchar('\n');
    }
    system("pause");
}