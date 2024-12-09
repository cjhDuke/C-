#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char tab[]="¡„“º∑°»˛À¡ŒÈ¬Ω∆‚∞∆æ¡",a[30]=" ";
    int n,i1,i2,i3,k=0;
    while(scanf("%d",&n),n<=0||n>999);
    i1=n/100; i2=n%100/10; i3=n%10;
    if(i1!=0)
    {
        strcpy(a,tab+2*i1);
        k=k+2; a[k]='\0';
        k=k+2; strcat(a,"∞€");
    }
    if(i2!=0)
    {
        strcat(a,tab+2*i2);
        k=k+2; a[k]='\0';
        k=k+2; strcat(a," ∞");
    }
    else
        if(i1!=0&&i3!=0)
        {
            strcat(a,"¡„"); k=k+2;
        }
    if(i3!=0)
    {
        k=k+2; strcat(a,tab+2*i3);
        a[k]='\0';
    }
    printf("%s\n",a);
    system("pause");
}