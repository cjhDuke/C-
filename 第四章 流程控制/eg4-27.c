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
                printf("原命题不成立");
            }
            j++;
        }
    }
    printf("64不是两个或两个以上连续自然数的和");
    system("pause");
}