#include<stdio.h>
#include<stdlib.h>
#define N 7
int main()
{
    float a[N],temp;
    int i,j,k;
    for(i=0;i<N;i++) scanf("%f",&a[i]);
    for(i=0;i<N-1;i++)
    {
        k=i;
        for(j=i+1;j<N;j++) if(a[j]<a[k]) k=j;
        temp=a[k]; a[k]=a[i]; a[i]=temp;
    }
    for(i=0;i<N;i++) printf("%f\t",a[i]);
    printf("\n");
    system("pause");
}