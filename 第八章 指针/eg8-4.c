#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *p[6]={"Trinidad and Tobago","Zambia","Italy","Mauritania","France","Romania"},*temp;
    int i,j,k;
    for(i=0;i<5;i++)
    {
        k=i;
        for(j=i+1;j<6;j++) if(strcmp(p[j],p[k])<0) k=j;
        temp=p[k];p[k]=p[i];p[i]=temp;
    }
    for(i=0;i<6;i++) puts(p[i]);
    system("pause");
}