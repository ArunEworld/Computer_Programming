#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i;
	printf("Enter the Two values to add\n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		a++;
	}
	printf("The added given value is %d",a);
	getch();
}

/*
Enter the Two values to add
12
2
The added given value is 14
*/
