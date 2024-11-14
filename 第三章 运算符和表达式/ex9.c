#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,average,a1,b1,c1;
	scanf("%f%f%f",&a,&b,&c);
	average=(a+b+c)/3;
	a1=fabs(a-average);
	b1=fabs(b-average);
	c1=fabs(c-average);
	if(a1<=b1&&a1<=c1)
	{
		printf("%f",a);
	}
	else if(b1<=a1&&b1<=c1)
	{
		printf("%f",b);
	}
	else
	{
		printf("%f",c);
	}
}
