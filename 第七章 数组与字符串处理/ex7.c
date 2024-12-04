#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],temp;
    scanf("%d",&a[0]);
    for(int i=1;i<10;i++)
    {
        scanf("%d",&a[i]);
        temp=a[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]<temp)
            {
                a[j+1]=a[j];    
            }
            else
            {
                break;    
            }
        }
        a[j+1]=temp;    
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
}