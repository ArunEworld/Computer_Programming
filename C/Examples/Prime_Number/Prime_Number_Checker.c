#include<stdio.h>

int main()
{
	int a,b,i,c=0;
	printf("enter the number\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=a%i;
	if(b==0)
		c++;
	}
	if(c==2)
		printf("given num is prime");
	else
		printf("given num is not prime");
	return 0;
}
/*Output
enter the number
8
given num is not prime
*/

/*Output
enter the number
7
given num is prime
*/
