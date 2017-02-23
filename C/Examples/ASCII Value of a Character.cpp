// http://www.programiz.com/c-programming/examples/ASCII-value-character

// C Program to Find ASCII Value of a Character

/* In C programming, a character variable holds ASCII value (an integer number between 0 an 127) rather than character itself. You will learn how to find ASCII value of a character in this program.

A character variable holds ASCII value (an integer number between 0 and 127) rather than that character itself in C programming. That value is known as ASCII value.

For example, ASCII value of 'A' is 65.

What this means is that, if you assign 'A' to a character variable, 65 is stored in that variable rather than 'A' itself.

*/

//	Program to Print ASCII Value

#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");

    // Reads character input from the user
    scanf("%c", &c);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    return 0;
}

/*
Output


Enter a character: arun
ASCII value of a = 97
--------------------------------
Process exited after 2.122 seconds with return value 0
Press any key to continue . . .



*/
/*
In this program, user is asked to enter a character which is stored in variable c. The ASCII value of that character is stored in variable c rather than that variable itself.

When %d format string is used, 71 (ASCII value of 'G') is displayed.

When %c format string is used, 'G' itself is displayed.
*/

