#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m[10][10],n,i1,i2,j1,j2,i,j,k;
    scanf("%d",&n);
    i1=j1=0;
    i2=j2=n-1;
    k=1;
    while(k<=n*n)
    {
        for(i=i1;i<=i2;i++) m[i][j1]=k++;
        for(j=j1+1;j<=j2;j++) m[i2][j]=k++;
        for(i=i2-1;i>=i1;i--) m[i][j2]=k++;
        for(j=j2-1;j>=j1+1;j--) m[i1][j]=k++;
        i1=++j1; i2=--j2;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }
    system("pause");
}