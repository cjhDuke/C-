#include <stdio.h>
//#include <iostream>
//using namespace std;

// ����maxIncrease���������۶�����
// ������s-���۶����飬n-���۶����鳤�ȣ�n>1
// ����ֵ�����۶��������
int maxIncrease(int s[], int n);

int main()
{
    int n, a[30], i;     // ������������飬n-���۶������a-���۶�����
    scanf("%d",&n);      // �������۶�������n>1
    // ����n�����۶�ֱ����a[0]��a[n-1]
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
    i = maxIncrease(a,n);
    printf("�����������Ϊ��%d\n",i);
    return 0;
}

int maxIncrease(int s[], int n)
{
    //���ڴ���Ӵ��룬ʵ�ֺ���maxIncrease
    /********** Begin *********/
    int b,max;
    max=s[1]-s[0];
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            b=s[j]-s[i];
            max=max>b?max:b;
        }
    }
    return max;


    
    /********** End **********/
}