//Fibonacci_Series
#include<stdio.h>
int main()
{
	int a=0,b=1,c,d,i;
	printf("enter the value\n");
	scanf("%d",&c);
	printf("%d%d",a,b);
	for(i=3;i<=c;i++)
	{
		d=a+b;
		printf("%d",d);
		a=b;
		b=d;
	}
	return 0;
}
