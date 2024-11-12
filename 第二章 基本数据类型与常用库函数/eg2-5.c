#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=1,s=0;
    while(i<=100)
    {
        s=s+i;
        i=i+1;
    }
    printf("s=%d\n",s);
    system("pause");

}