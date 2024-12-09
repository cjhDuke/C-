#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[4][81],c[81],temp;
    int i,j;
    for(i=0;i<4;i++)
    {
        while(gets(str[i]),strlen(str[i])<8);
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<=strlen(str[i])-8;j++)
        {
            strcpy(c,*(str+i)+j);
            c[8]='\0';
            temp=str[i][j+8];
            if(strcmp(c,"computer")==0)
            {
                strcpy(*(str+i)+j,"¼ÆËã»ú");
                str[i][j+8]=temp;
            }
        }
    }
    for(i=0;i<4;i++) puts(str[i]);
    system("pause");
}