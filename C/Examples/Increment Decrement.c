#include<stdio.h>
int main()
{
	int a=5, b=6;
	printf("A : %d \n", a);
	printf("B : %d \n\n", b);
	int c = a++ + ++b;
	printf("A : %d \n", a);
	printf("B : %d \n\n", b);

	printf("C : %d \n", c);
	printf("A : %d \n", a);
	printf("C : %d \n", c);
	return 0;
}

/*Output

A : 5
B : 6

A : 6
B : 7

C : 12
A : 6
B : 7

*/