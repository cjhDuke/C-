#include<stdio.h>
#include<stdlib.h>
#define CR printf("\n");
int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},i,j;
    for(i=0;i<3;i++)
    {
        printf("a+%d=%x\t",i,a+1); CR;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("*(a+%d)+%d=%x  ",i,j,*(a+i)+j);
        }
        CR;
    }
    system("pause");
}