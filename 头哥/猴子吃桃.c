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
//�������ܣ��ӵ�n��ֻʣ��һ�����ӷ������Ƴ���1���������
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
