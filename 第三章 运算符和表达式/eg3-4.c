#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=6,j=6,k,m;
    k=++i+i+++i++;
    m=j+++j+++j++;
    printf("i=%d j=%d\n k=%d m=%d\n",i,j,k,m);
    system("pause");
}