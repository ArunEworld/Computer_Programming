//	http://www.programiz.com/c-programming/examples/print-integer


#include <stdio.h>
int main()
{
    int number;

    // printf() dislpays the formatted output
    printf("Enter an integer: ");

    // scanf() reads the formatted input and stores them
    scanf("%d", &number);

    // printf() displays the formatted output
    printf("You entered: %d", number);
    return 0;
}

/*
Output

Enter an integer: 5
You entered: 5
--------------------------------
Process exited after 1.888 seconds with return value 0
Press any key to continue . . .

*/
