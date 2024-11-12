#include<stdio.h>
int main()
{
    char ch;
    do
    {
        scanf("%c",&ch);
        printf("%cµÄASCIIÖµ%d\n",ch,ch);
    } while(ch!='?');
    
}