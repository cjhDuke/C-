
#include <stdio.h>

// 函数printMonth：按要求的格式打印某年某月的日历
// 参数：year-年，month-月
// 返回值：无
void printMonth(int year, int month);

// leapYear：判断闰年
// 参数：y-年
// 返回值：1-是闰年，0-不是闰年
int leapYear(int y)
{
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    return 0;
}

// 函数whatDay:计算某年某月的1号是星期几
// 参数：year-年，month-月
// 返回值：1到7--星期1到星期日
int whatDay(int year, int month)
{
    // 1年月日是星期一
    int w = 1;
    int i;

    // 1到year-1都是全年
    for(i = 1; i < year; i++)
    {
        if(leapYear(i))
            w += 366;
        else
            w += 365;
    }
    switch(month)
    {
    case 12: // 加月的
        w += 30;
    case 11: // 加月的
        w += 31;
    case 10: // 加月的
        w += 30;
    case 9:  // 加月的
        w += 31;
    case 8:  // 加月的
        w += 31;
    case 7:  // 加月的
        w += 30;
    case 6:  // 加月的
        w += 31;
    case 5:  // 加月的
        w += 30;
    case 4:  // 加月的
        w += 31;
    case 3:  // 加月的
        if(leapYear(year))
            w += 29;
        else
            w += 28;
    case 2:  // 加月的天
        w += 31;
    case 1:  // 1月不加了
        ;
    }

    // 得到-6，其中为星期天
    w = w % 7;

    // 调整星期天
    if(w == 0)
        w = 7;
    return w;
}

// 请在下面补充代码，实现函数printMonth
/*************** Begin **************/
void printMonth(int year, int month)
{
    int n;
    printf("  一  二  三  四  五  六  日\n");
    for(int i=1;i<whatDay(year,month);i++)
    {
        printf("    ");
    }
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) n=31;
    if(month==4||month==6||month==9||month==11) n=30;
    if(month==2&&leapYear(year)==1) n=29;
    if(month==2&&leapYear(year)==0) n=28;
    for(int j=1;j<=n;j++)
    {
        if((j+whatDay(year,month)-2)%7==0) printf("\n");
        printf("%4d",j);
    }
    printf("\n");
}

/*************** End **************/

int main()
{
    // 年、月
    int y, m;

    // 输入年月
    scanf("%d%d",&y,&m);

    // 输出该年月的日历
    printMonth(y,m);

    return 0;
}