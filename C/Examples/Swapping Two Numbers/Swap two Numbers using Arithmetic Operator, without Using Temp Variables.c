//	http://www.programiz.com/c-programming/examples/swapping

// Example 2: Program to Swap Number Without Using Temporary Variables

#include <stdio.h>
int main()
{
    double firstNumber, secondNumber;

    printf("Enter first number: ");
    scanf("%lf", &firstNumber);

    printf("Enter second number: ");
    scanf("%lf",&secondNumber);

    // Swapping process

    firstNumber = firstNumber - secondNumber;
    printf("\n firstNumber = %.2lf\n", firstNumber);
    secondNumber = firstNumber + secondNumber;
    printf("secondNumber = %.2lf", secondNumber);
    firstNumber = secondNumber - firstNumber;
	printf("\n firstNumber = %.2lf\n", firstNumber);


	printf("\nAfter swapping, firstNumber = %.2lf\n", firstNumber);
    printf("After swapping, secondNumber = %.2lf", secondNumber);

    return 0;
}

/*
Output

Enter first number: 10.25
Enter second number: -12.5

After swapping, firstNumber = -12.50
After swapping, secondNumber = 10.25
*/
