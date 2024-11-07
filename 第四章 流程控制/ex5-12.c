#include<stdio.h>
int main()
{
	printf("      (1)  (2)  (3)  (4)  (5)  (6)  (7)  (8)  (9)\n"); 
	int i;
    for(i=1;i<=9;i++)
    {
    	printf("(%d)    ",i);
    	int j;
        for(j=1;j<=9;j++)
        {
            printf("%-4d ",i*j);
        }
        printf("\n");
    }
}
