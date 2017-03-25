//Binary_to_Hexadecimal_using_pow_function.c
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c=0,x=0;
	printf("enter the num\n");
	scanf("%d",&a);
	while(a)
	{
		b=a%10;
		if(b==1)
		{
		c+=pow(2,x);
	}
		a=a/10;
		x++;
	}
	printf("%x",c);
	return 0;
}
/*
enter the num
1101
d
*/
