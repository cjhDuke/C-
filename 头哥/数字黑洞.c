#include  <stdio.h>
#include<math.h>
int IsDaffodilNum(int num);
int main(void)
{
    int n;
    printf("Input n:");
    scanf("%d", &n);
    if (n % 3 != 0)
    {
        printf("%d is not a daffodil number\n", n);
    }
    else if (IsDaffodilNum(n))
    {
        printf("%d is a daffodil number\n", n);
    }    
    return 0;
}
//函数功能：验证n是黑洞数，并记录验证的步数
int IsDaffodilNum(int num)
{
	/*************** Begin ***************/
    int weishu,sum=0,i=0;
    printf("%d\n",num);
    while(num!=153)
    {
        while(num!=0)
        {
            weishu=num%10;
            num/=10;
            sum=sum+pow(weishu,3);
        }
        num=sum;
        printf("%d\n",sum);
        sum=0;
        i++;
    }
    return i;
    /*************** End ***************/
}