#include <stdio.h>
// 函数funP：实现数学函数P函数
// 返回值：返回P(n,x)的值
double funP(int n, double x)
{
    // 请在这里补充代码，实现递归函数funP
    /********** Begin *********/
    if(n==0) return 1;
    if(n==1) return x;
    else return((2*n-1)*funP(n-1,x)-(n-1)*funP(n-2,x))/n;



    
    /********** End **********/
}
int main()
{
    int n;
    double x;
    scanf("%d%lf",&n,&x);     // 输入n、x
    //cout << "P("<<n<<", "<<x<<")=" << funP(n,x) << endl;
    printf("P(%d, %.2f)=%.5f\n",n,x,funP(n,x));
    return 0;
}