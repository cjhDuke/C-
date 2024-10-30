#include<stdio.h>
int main()
{
    char ch;
    do
    {
        scanf("%c",&ch);
        printf("%c的ASCII值%d\n",ch,ch);
    } while(ch!='?');
    
}