//	http://www.programiz.com/c-programming/examples/product-numbers

//C Program to Multiply two Floating Point Numbers
/* In this program, user is asked to enter two numbers (floating point numbers). Then, the product of those two numbers is stored in a variable and displayed on the screen. */

#include <stdio.h>
int main()
{
    double firstNumber, secondNumber, productOfTwoNumbers;
    printf("Enter two numbers: ");

    // Stores two floating point numbers in variable firstNumber and secondNumber respectively
    scanf("%lf %lf", &firstNumber, &secondNumber);

    // Performs multiplication and stores the result in variable productOfTwoNumbers
    productOfTwoNumbers = firstNumber * secondNumber;

    // Result up to 2 decimal point is displayed using %.2lf
    printf("Product = %.2lf", productOfTwoNumbers);

    return 0;
}

/*
Output

Enter two numbers: 2.222
1.111
Product = 2.47
--------------------------------
Process exited after 8.903 seconds with return value 0
Press any key to continue . . .
*/

/*
In this program, user is asked to enter two numbers. These two numbers entered by the user is stored in variable firstNumber and secondNumber respectively. This is done using scanf() function.

Then, the product of firstNumber and secondNumber is evaluated and the result is stored in variable productOfTwoNumbers.

Finally, the productOfTwoNumbers is displayed on the screen using printf() function.

Notice that, the result is round to second decimal place using %.2lf conversion character.
*/
