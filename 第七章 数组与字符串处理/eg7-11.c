#include<stdio.h>
#include<stdlib.h>
#define N 4
int main()
{
    float a[N][N],temp; int i,j;
    for(i=0;i<N;i++) for(j=0;j<N;j++) scanf("%f",&a[i][j]);
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            temp=a[i][j]; a[i][j]=a[j][i]; a[j][i]=temp;
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++) printf("%8.2f",a[i][j]);
        printf("\n");
    }
    system("pause");
}