#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,sum=0;
    for(i=1;i<=32;i++)
    {
        j=i;
        while(sum<64)
        {
            sum+=j;
            if(sum==64)
            {
                printf("ԭ���ⲻ����");
            }
            j++;
        }
    }
    printf("64������������������������Ȼ���ĺ�");
    system("pause");
}