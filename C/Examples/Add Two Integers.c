//	http://www.programiz.com/c-programming/examples/add-numbers


//Program to Add Two Integers

#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;

    printf("Enter two integers: ");

    // Two integers entered by user is stored using scanf() function
    scanf("%d %d", &firstNumber, &secondNumber);

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Displays sum
    printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);

    return 0;
}

/*
Output

Enter two integers: 23  23
23 + 23 = 46
--------------------------------
Process exited after 5.342 seconds with return value 0
Press any key to continue . . .
*/

/*
In this program, user is asked to enter two integers. Two integers entered by the user is stored in variables firstNumber and secondNumber respectively. This is done using scanf() function.

Then, variables firstNumber and secondNumber are added using + operator and the result is stored in sumOfTwoNumbers.

Sum of two integers in C programming

Finally, the sumofTwoNumbers is displayed on the screen using printf() function.
*/
