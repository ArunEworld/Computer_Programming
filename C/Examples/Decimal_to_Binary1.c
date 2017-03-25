//Decimal_to_Binary.c
#include<stdio.h>
int main()
{
	int a,b,c[20],i=0,k,m,d=0;
	printf("enter the num\n");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%2;
		c[i]=b;
		a=a/2;
//		printf("%d",i);
		i++;
	}
	for(k=i-1;k>=0;k--)
	{
		printf("%d\n",c[k]);
	}
	return 0;
}
