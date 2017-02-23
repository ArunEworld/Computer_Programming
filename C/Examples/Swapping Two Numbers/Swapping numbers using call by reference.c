//	Swap two number using pointers in fuction

/*	http://www.c4learn.com/c-programs/interchanging-values-of-two-variables.html
*/
#include<stdio.h>

	//	Now Take a look at function definition, We have passed address of two variables from main function to swap function. So we need variable container that can store the address of integer variables i.e Integer Pointers.
void swap(int *num1, int *num2) {
   
   //	Thus address of first number will be collected in “num1” pointer variable and second number will be collected in “num2” pointer variable.
   int temp;
   temp = *num1;
   *num1 = *num2;
   *num2 = temp;
}
 
int main() {
   int num1, num2;
	//	Firstly we need to accept two numbers using scanf statement like this –
   printf("\nEnter the first number : ");
   scanf("%d", &num1);
   printf("\nEnter the Second number : ");
   scanf("%d", &num2);
 
	//	Now You need to pass the address of both variables to the function. Parameter passing scheme is called as Pass by Pointer
   swap(&num1, &num2);
 
	
   printf("\nFirst number  : %d", num1);
   printf("\nSecond number : %d", num2);
 
   return (0);
}

/*
Output :

Enter the first number  : 12
Enter the Second number : 22
First number  : 22
Second number : 12
*/