#include<stdio.h>
int main()
{
	char a1,b1,c1;
	int a2,b2,c2;
	scanf("%c%c%c",&a1,&b1,&c1);
	a2=a1;b2=b1;c2=c1;
	if(a2<=b2&&a2<c2)
	{
		if(b2<c2)
		{
			printf("%c %c %c",a1,b1,c1);	
		}
		
		else
		{
			printf("%c %c %c",a1,c1,b1);
		}
	}
	else if(b2<=c2&&b2<a2)
	{
		if(a2<c2)
		{
			printf("%c %c %c",b1,a1,c1);
		}
		else
		{
			printf("%c %c %c",b1,c1,a1);
		}
	}
	else if(c2<=b2&&c2<a2)
	{
		if(a2<b2)
		{
			printf("%c %c %c",c1,a1,b1);
		}
		else
		{
			printf("%c %c %c",c1,b1,a1);
		}
	}
}
