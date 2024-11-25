#include<stdio.h>
#include<stdlib.h>
#define S x=y=z
#define P3(x,y,z) printf("x=%d\ty=%d\tz=%d\n",x,y,z)
int main()
{
    int x,y,z;
    S=1;++x||++y||++z;P3(x,y,z);
    S=1;++x&&++y||++z;P3(x,y,z);
    S=-1;++x||++y&&++z;P3(x,y,z);
    S=-1;++x&&++y&&++z;P3(x,y,z);
    system("pause");
}