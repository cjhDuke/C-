#include<stdio.h>
#include<stdlib.h>
int main()
{
    int b[5][5],i,j;
    for(i=0;i<5;i++) for(j=0;j<5-i;j++) b[i][j]=5+i-j;
    for(i=1;i<5;i++) for(j=5-i;j<5;j++) b[i][j]=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++) printf("%3d",b[i][j]);
        printf("\n");
    }
    system("pause");
}