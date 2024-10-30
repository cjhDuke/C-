#include<stdio.h>
int main()
{
    int n=0,p=0;
    float sum=0,score;
    while(1)
    {
        scanf("%f",&score);
        if(score<0) break;
        else
        {
            sum+=score;
            n++;
        }
        if(score>60)
        {
            p++;
        }
    }
    printf("平均分=%f 通过率=%f",sum/n,(float)p/n);
}