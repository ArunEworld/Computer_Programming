Binary_to_Deciaml_using_Pow_function
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
	printf("%d",c);
	return 0;
}
