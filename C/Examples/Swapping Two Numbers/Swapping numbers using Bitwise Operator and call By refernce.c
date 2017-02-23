/*	Swap two number using (Xor) Bitwise Operator in fuction without third variable.c

http://www.sanfoundry.com/c-program-swap-two-numbers-bitwise-operators/

* C Program to Swap two Numbers using Bitwise operators

 */

#include <stdio.h>
#include <string.h>

/* Function Prototype */
void swap(int*, int *);

void main()
{
    int num1, num2;
    printf("\nEnter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("\nThe numbers before swapping are Number1= %d Number2 = %d", num1, num2);
    swap(&num1, &num2);        /* Call by Reference to function swap */
    printf("\nThe numbers after swapping are Number1= %d Number2 = %d", num1, num2);
}

/* Code to swap two numbers using bitwise operator */
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

/*	OutPuts
Enter two numbers:45 76
The numbers before swapping are Number1= 45 Number2=76
The numbers after swapping are Number1= 76 Number2=45
*/