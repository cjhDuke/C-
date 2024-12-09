#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[81];int i; gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(islower(s[i]))
        {
            if(s[i]=='y')
                s[i]='a';
            else if(s[i]=='z')
                s[i]='b';
            else 
                s[i]=(char)(s[i]+2);
        }
        if(isupper(s[i]))
        {
            if(s[i]=='Y')
                s[i]='A';
            else if(s[i]=='Z')
                s[i]='B';
            else 
                s[i]=(char)(s[i]+2);
        }
    }
    puts(s);
    system("pause");

}