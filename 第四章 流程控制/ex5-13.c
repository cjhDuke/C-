#include<stdio.h>
#include<math.h>
int main()
{
    int y,k=0;
    for(int n=-39;n<=40;n++)
    {
        y=n*n+n+41;
        for(int i=2;i<=sqrt(y);i++)
        {
            if(y%i==0)
            {
                printf("n=%d时,其值%d不是素数",n,y);
                k++;
                break;
            }
        }
    }
    if(k==0) printf("都是素数");
}
