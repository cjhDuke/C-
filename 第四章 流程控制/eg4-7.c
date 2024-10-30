#include<stdio.h>
#include<stdlib.h>
int main()
{
    int score;
    printf("Please input your score:");
    scanf("%d",&score);
    while(score<0||score>100)
    {
        printf("Wrong score,please input score between 0 and 100:");
        scanf("%d",&score);
    }


    switch (score/10)
    {
        case 10:
        case 9:printf("优秀"); break;
        case 8:printf("良好"); break;
        case 7:printf("中等"); break;
        case 6:printf("及格"); break;
        defalut:printf("不及格"); break;
    }
    
}