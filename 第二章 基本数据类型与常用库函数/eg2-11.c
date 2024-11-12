#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    a=b=c=0;
    scanf("%d%*d%d",&a,&c);
    printf("a=%d b=%d c=%d\n",a,b,c);
    system("pause");
}