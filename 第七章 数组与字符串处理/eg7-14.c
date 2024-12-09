#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[100]="ÖÐÎÄWindows xp";
    puts(a);
    puts(&a[4]);
    printf("%s",a);
    printf("%s",a+4);
    system("pause");
}