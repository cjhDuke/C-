#include<stdio.h>
#include<stdlib.h>
int i=1,reset(),next(int),last(int),New(int);
int main()
{
    int i,j;
    i=reset();
    for(j=1;j<=3;j++)
    {
        printf("i=%d,j=%d\n",i,j);
        printf("next(%d)=%d\n",i,next(i));
        printf("last(%d)=%d\n",i,last(i));
        printf("new(%d+%d)=%d\n",i,j,New(i+j));
    }
    system("pause");
}
int reset()
{
    return i;
}
    int next(int j)
    {
        return j=i++;
    }
int last(int j)
{
    static int i=10;
    return j=i--;
}
int New(int i)
{
    int j=10;
    return i=j+=i;
}
