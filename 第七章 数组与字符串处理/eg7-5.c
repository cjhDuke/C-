#include<stdio.h>
#include<stdlib.h>
#define N 17
int main()
{
    int i,a[N],k=0,delc=0;
    for(i=0;i<N;i++) a[i]=1;
    while(delc<N-1)
    {
        for(i=0;i<N;i++)
        {
            if(a[i]!=0)
            {
                k++;
                if(k==3)
                {
                    a[i]=0;
                    k=0;
                    delc++;
                }
            }
        }
    }
    for(i=0;i<N;i++)
    {
        if(a[i]!=0)
        {
            printf("%d\n",i);
            break;
        }
    }
    system("pause");
}