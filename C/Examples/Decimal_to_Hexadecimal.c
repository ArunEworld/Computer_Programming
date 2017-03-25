//Decimal_to_Hexadecimal.c

#include<stdio.h>
int main()
{
	int a,b,c[20],i=0,k,m,d=0;
	printf("enter the num");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%16;
		c[i]=b;
		a=a/16;
		i++;
	}
	for(k=i-1;k>=0;k--)
	{
		printf("%x\n",c[k]);
	}
	return 0;
}
