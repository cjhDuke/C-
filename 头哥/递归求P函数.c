#include <stdio.h>
// ����funP��ʵ����ѧ����P����
// ����ֵ������P(n,x)��ֵ
double funP(int n, double x)
{
    // �������ﲹ����룬ʵ�ֵݹ麯��funP
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
    scanf("%d%lf",&n,&x);     // ����n��x
    //cout << "P("<<n<<", "<<x<<")=" << funP(n,x) << endl;
    printf("P(%d, %.2f)=%.5f\n",n,x,funP(n,x));
    return 0;
}