#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float deg=0;
    while(deg!=60)
    {
        printf("sin(%.6f)=%.6f\n",deg,sin(deg*3.141593/180));
        deg=deg+0.6;
    }
    system("pause");
}
//无法执行，死循环，实型数据无法准确表示0.6，故循环中deg无法准确赋值到60，程序会一直执行，若改成deg<=60则可