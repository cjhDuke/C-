#include <stdio.h>
int main()
{
    int n, a[30], i;       // 定义变量及数组，n-销售额个数，a-销售额
    scanf("%d",&n);        // 输入销售额数量，n <= 30
    for(i = 0; i < n; i++) // 输入n个销售额，分别存入a[0]到a[n-1]
        scanf("%d",&a[i]);
    // 请在此添加代码，计算并输出销售额的波动情况 
    /********** Begin *********/   
    int b;
    for(int j=0;j<n-1;j++)
    {
        b=a[j+1]-a[j];
        printf("%d ",b);
    }



    /********** End **********/
    return 0;
}
