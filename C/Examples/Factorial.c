//factorial
#include<stdio.h>
int main()
{
	int a,b,c=1,i;
	printf("enter the num");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	c=c*i;
	printf("%d",c);
	return 0;
}
