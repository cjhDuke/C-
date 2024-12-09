#include<stdio.h>
#include<stdlib.h>
int main()
{
    char month[12][5]={"(1)","(2)","(3)","(4)","(5)","(6)","(7)","(8)","(9)","(10)","(11)","(12)"};
    char week[]={"Sun  Mon  Tue  Wed  Thu  Fri  Sat  "};
    int date[12][6][7]={{{0}}},y,w,m,d,i,j;
    printf("请输入年份:"); scanf("%d",&y);
    printf("%45s\n","*******************");
    printf("%27c%10d%8c\n",'*',y,'*');
    printf("%45s\n\n","*******************");
    w=(y+(y-1)/4-(y-1)/100+(y-1)/400)%7;
    for(m=0;m<12;m++)
    {
        switch(m+1)
        {
            case 1: case 3: case 5: case 7:
            case 8: case 10: case 12: d=31; break;
            case 4: case 6: case 9: case 11: d=30; break;
            case 2:
                if((y%4==0&&y%100!=0)||y%400==0)
                    d=29;
                else
                    d=28;
        }
        for(i=0,j=1;j<=d;j++)
        {
            date[m][i][w]=j;
            w++;
            if(w==7){ w=0; i++;}
        }
    }
    for(m=0;m<12;m=m+2)
    {
        printf("          ****%s月****          ",month[m]);
        printf("                   ****%s月****\n",month[m+1]);
        printf("  %s      %s\n",week,week);
        for(i=0;i<6;i++)
        {
            for(j=0;j<7;j++)
            {
                if(date[m][i][j]!=0)
                    printf("%5d",date[m][i][j]);
                else
                    printf("     ");
            }
            printf("     ");
        for(j=0;j<7;j++)
            if(date[m+1][i][j]!=0)
                printf("%5d",date[m+1][i][j]);
            else
                printf("     ");
            printf("\n");
        }    
        printf("\n");
    }
    system("pause");
}