//GCD_Using-while_loop_and_if_else
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("\nEnter two numbers:\n");
	scanf("%d %d",&n1,&n2);
	while(n1!=n2)
	{
		if(n1>=n2-1)	n1=n1-n2;
		else	n2=n2-n1;
	}
	printf("\nGCD=%d",n1);
	return 0;
}
