#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x=3,*pi=&x,**ppi=&pi;char ch='#',*pc,**ppc;
    pc=&ch;ppc=&pc;
    printf("%d,%x,%x,%x\n",x,pi,ppi,&ppi);
    printf("%c,%x,%x,%x\n",ch,pc,ppc,&ppc);
    system("pause");
}