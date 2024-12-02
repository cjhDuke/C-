#include<stdio.h>
#include<stdlib.h>
#define N 7
int main()
{
    float a[N],temp;
    int i,j;
    for(i=0;i<N;i++) scanf("%f",&a[i]);
    for(i=0;i<N-1;i++)
    {
        for(j=i;a[j]>a[j+1]&&j>=0;j--)
        {
            temp=a[j]; a[j]=a[j+1]; a[j+1]=temp;
        }
    }
    for(i=0;i<N;i++) printf("%.2f\t",a[i]); printf("\n");
    system("pause");
}