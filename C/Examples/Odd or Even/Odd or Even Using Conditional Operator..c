//  http://www.programiz.com/c-programming/examples/even-odd]

/* C Program to Check Whether a Number is Even or Odd
In this example, if...else statement is used to check whether a number entered by the user is even or odd.
*/

//	Example #1: Program to Check Odd or Even Using Conditional Operator

#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("%d is even.", number) : printf("%d is odd.", number);

    return 0;
}

/*
Output

Enter an integer: 55
55 is odd.
--------------------------------
Process exited after 2.554 seconds with return value 0
Press any key to continue . . .



*/
