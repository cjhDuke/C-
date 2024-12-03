#include <stdio.h>
#define M 5
#define N 5
void Merge(int a[], int b[], int c[], int m, int n);
int main(void)
{
    int a[N], b[N], c[M+N];
    int i, m, n;
    printf("Input m,n:");
    scanf("%d,%d", &m, &n);
    printf("Input array a:");
    for (i=0; i<m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input array b:");
    for (i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }
    Merge(a, b, c, m, n);
    for (i=0; i<m+n; i++)
    {
        printf("%d\t", c[i]);
    }
    printf("\n");
    return 0;
}
//函数功能：将升序排列的a数组中的m个元素和b数组中的n个元素合并到c数组中
void Merge(int a[], int b[], int c[], int m, int n)
{
	/*************** Begin ***************/
    int i=0,j=0,k=0;
    while((k+j)<(m+n))
    {
        if(a[k]<b[j]&&k<=m)
        {
            c[i]=a[k];
            k++;
            i++;
        }
        if(b[j]<a[k]&&j<=n)
        {
            c[i]=b[j];
            j++;
            i++;
        }
    }
    /*************** End ***************/
}