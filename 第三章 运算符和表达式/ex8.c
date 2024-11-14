#include<stdio.h>
#include<math.h>
int main()
{
	int a1,b1,c1,a2,b2,c2,min,mid,max;
	scanf("%d%d%d",&a1,&b1,&c1);
	a2=fabs(a1);
	b2=fabs(b1);
	c2=fabs(c1);
	if(a2<=b2&&a2<c2)
	{
		if(b2<c2)
		{
			printf("%d %d %d",a1,b1,c1);	
		}
		
		else
		{
			printf("%d %d %d",a1,c1,b1);
		}
	}
	else if(b2<=c2&&b2<a2)
	{
		if(a2<c2)
		{
			printf("%d %d %d",b1,a1,c1);
		}
		else
		{
			printf("%d %d %d",b1,c1,a1);
		}
	}
	else if(c2<=b2&&c2<a2)
	{
		if(a2<b2)
		{
			printf("%d %d %d",c1,a1,b1);
		}
		else
		{
			printf("%d %d %d",c1,b1,a1);
		}
	}
}
