#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[81]; int k=0,i=0,p1=0,p2=0;
    gets(a);
    while(i<strlen(a))
    {
        if(p2-p1==3)
        {
            if(a[p1]=='T'||a[p1]=='t'&&a[p1+1]=='h'&&a[p1+2]=='e') k++;
        }
        while(!isalpha(a[i])) p1=++i;
        while(isalpha(a[i])) p2=++i;
    }
    printf("共有%d个单词""the""\n",k);
    system("pause");
}