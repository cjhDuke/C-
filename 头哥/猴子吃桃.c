#include <stdio.h>
int Monkey(int n);
int main(void)
{
    int days, total;
    printf("Input days:");
    scanf("%d", &days);
    total = Monkey(days);
    printf("%d\n", total);
    return 0;
}
//函数功能：从第n天只剩下一个桃子反向逆推出第1天的桃子数
int Monkey(int n)
{
	/*************** Begin ***************/
    int total=1;
    for(int i=1;i<=n-1;i++)
    {
        total=(total+1)*2;
    }
    return total;
    /*************** End ***************/
}
