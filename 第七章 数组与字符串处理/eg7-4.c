#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
    int i,a[N],y;
    for(i=0;i<N;i++) scanf("%d",a+i);
    y=*a;
    while(1)
    {
        for(i=1;i<N;i++) if(y%*(a+i)!=0) break;
        if(i==N) break;
        y+=*a;
    }
    printf("%d\n",y);
    system("pause");
}