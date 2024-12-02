#include<stdio.h>
#include<stdlib.h>
int main()
{
    float score[30][5]={{0}},aver;int i,j,k=0;
    for(i=0;i<30;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%f",*(score+i)+j);
            *(*(score+i)+4)+=*(*(score+i)+j);
        }
        *(*(score+i)+4)/=4;
    }
    for(i=0;i<30;i++) if(*(*(score+i)+4)<60) k++;
    printf("%d\n",k);
    system("pause");
}