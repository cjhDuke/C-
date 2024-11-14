#include<stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a=(n-n%100)/100;
	b=((n-n%10)-100*a)/10;
	c=n-100*a-10*b;
	printf("%d",100*c+10*b+a);
}
