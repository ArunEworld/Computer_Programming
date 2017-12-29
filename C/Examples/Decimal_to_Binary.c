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

/**************************************************************************/

/*
 * C Program to Print Binary Equivalent of an Integer using Recursion
 */
#include <stdio.h>
 
int binary_conversion(int);

int main()
{
	int num, bin;
	printf("Enter a decimal number: ");
	scanf("%d", &num);
	bin = binary_conversion(num);
	printf("The binary equivalent of %d is %d\n", num, bin);
}

int binary_conversion(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else
	{
		return (num % 2) + 10 * binary_conversion(num / 2);
	}
}

/* Output
	Enter a decimal number:  10
	The binary equivalent of 10 is 1010
*/
