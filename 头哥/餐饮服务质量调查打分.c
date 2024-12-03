#include <stdio.h>
#define  STUDENTS     40
#define  GRADE_SIZE   11
int main(void)
{
	/*************** Begin ***************/ 
	int score[40],count[11]={0};
    printf("Please enter the response score of forty students:\n");
    for(int i=0;i<40;i++)
    {
        scanf("%d",&score[i]);
        switch(score[i])
        {
            case 1:count[1]++;break;
            case 2:count[2]++;break;
            case 3:count[3]++;break;
            case 4:count[4]++;break;
            case 5:count[5]++;break;
            case 6:count[6]++;break;
            case 7:count[7]++;break;
            case 8:count[8]++;break;
            case 9:count[9]++;break;
            case 10:count[10]++;break;
        }
    }
    printf("Grade\tCount\tHistogram\n");
    for(int i=1;i<=10;i++)
    {
        printf("%5d\t%5d\t",i,count[i]);
        for(int j=1;j<=count[i];j++)
        {
            printf("*");
        }
        printf("\n");
    }
	/*************** End ***************/
     return 0;
}