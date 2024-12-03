#include <stdio.h>
//#include <iostream>
//using namespace std;

// 函数maxIncrease：计算销售额增幅
// 参数：s-销售额数组，n-销售额数组长度，n>1
// 返回值：销售额最大增幅
int maxIncrease(int s[], int n);

int main()
{
    int n, a[30], i;     // 定义变量及数组，n-销售额个数，a-销售额数组
    scanf("%d",&n);      // 输入销售额数量，n>1
    // 输入n个销售额，分别存入a[0]到a[n-1]
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
    i = maxIncrease(a,n);
    printf("最大销售增幅为：%d\n",i);
    return 0;
}

int maxIncrease(int s[], int n)
{
    //请在此添加代码，实现函数maxIncrease
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