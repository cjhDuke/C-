#include <stdio.h>
int MaxCommonFactor(int a, int b);
int main(void)
{
	int x, y, z;
	printf("Please input x, y:");
	scanf("%d, %d", &x, &y);
	z = MaxCommonFactor(x, y);
	printf("The max common factor = %d\n", z);
    return 0;
}
//  �������ܣ��������������������Լ��������-1��ʾû�����Լ��
int MaxCommonFactor(int a, int b)
{
	/*************** Begin ***************/
    int min;
    min=(a<b)?a:b;
	int yueshu;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0) yueshu=i;
    }
    if(yueshu==1) return -1;
    else return yueshu;
	/*************** End ***************/
}