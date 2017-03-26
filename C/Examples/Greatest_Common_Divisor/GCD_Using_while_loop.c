//GCD_Using_while_loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,gcd,t;
	printf("Enter te two numbers\n");
	scanf("%d %d",&a,&b);
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	gcd=a;
	printf("GCD is %d",gcd);
	getch();
}
