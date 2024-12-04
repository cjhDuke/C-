#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],b[10],c[20],len_a=0,len_b=0,ch1,ch2,count,k=0,sum=0;
    printf("请输入第一个数组的数:\n");
    while(len_a<10)
    {
        if(scanf("%d",&a[len_a])!=1)
        {
            printf("请输入数字!");
            break;
        }
        len_a++;
        ch1=getchar();
        if(ch1=='\n') break;
    }
    printf("请输入第二个数组的数:\n");
    while(len_b<10)
    {
        if(scanf("%d",&b[len_b])!=1)
        {
            printf("请输入数字!");
            break;
        }
        len_b++;
        ch2=getchar();
        if(ch2=='\n') break;
    }
    for(int i=0;i<len_a;i++)
    {
        count=0;
        for(int j=0;j<len_b;j++)
        {
            if(a[i]==b[j]) count++;
        }
        if(count==0)
        {
            c[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<len_b;i++)
    {
        count=0;
        for(int j=0;j<len_a;j++)
        {
            if(b[i]==a[j]) count++;
        }
        if(count==0)
        {
            c[k]=b[i];
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        for(int j=i+1;j<k;)
        {
            if(c[i]==c[j])
            {
                for(int m=j;m<k;m++)
                {
                    c[m]=c[m+1];
                }
                k--;
            }
            else j++;
        }
    }
    printf("\n");
    printf("只出现一次的数字是:");
    for(int i=0;i<k-sum;i++)
    {
        printf("%d ",c[i]);
    }
    system("pause");
    return 0;
}