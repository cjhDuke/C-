#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 30
int main()
{
    char name[N][9],ctemp[9];
    float sco[N][5],temp;
    int i,j,k;
    for(i=0;i<N;i++)
    {
        scanf("%s",name[i]);
        sco[i][4]=0;
        for(j=0;j<4;j++)
        {
            scanf("%f",&sco[i][j]);
            sco[i][4]+=sco[i][j]/4;
        }
    }
    for(i=0;i<N-1;i++)
    {
        k=i;
        for(j=i+1;j<N;j++)
        {
            if(sco[j][4]>sco[k][4])
            {
                k=j;
            }
        }
        strcpy(ctemp,name[i]);
        strcpy(name[i],name[k]);
        strcpy(name[k],ctemp);
        for(j=0;j<5;j++)
        {
            temp=sco[i][j];
            sco[i][j]=sco[k][j];
            sco[k][j]=temp;
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%9s",name[i]);
        for(j=0;j<5;j++) printf(",%7.1f",sco[i][j]);
        putchar('\n');
    }
    system("pause");
}