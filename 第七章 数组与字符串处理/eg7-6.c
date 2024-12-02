#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m[12]={0},np=1,jg=2,i,num=0;
    /*m[i]值表示编号为i的人手中的贺卡数，初值为0*/
    /*变量np值表示将要为第几个人发，num值为已发贺卡数*/
    while(1)
    {
        m[np]=m[np]+1;
        np=np+jg;
        num=num+1;
        if(np>11) np=np-11;
        if(jg==2) jg=3;
        else jg=2;
        for(i=1;i<=11;i++) if(m[i]==0) break;
        if(i==12) break;
    }
    printf("%d\n",num);
    system("pause");
}