#include<stdio.h>
#include<stdlib.h>
#define M 5
#define N 4
#define K 3
int main()
{
    float a[M][N],b[N][K],c[M][K]={{0}};
    int i,j,L;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++) scanf("%f",&a[i][j]);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<K;j++) scanf("%f",&b[i][j]);
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<K;j++)
        {
            for(L=0;L<N;L++) c[i][j]+=a[i][L]*b[L][j];
        }
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<K;j++) printf("%8.2f",c[i][j]);
        printf("\n");
    }
    system("pause");
}