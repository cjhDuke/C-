#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,x[5]={1,-6,5,7,2};
    for(i=0;i<5;i++)
    {
        printf("%x,%d\t",x+i,*(x+i));
    }
    printf("\n");
    system("pause");
}