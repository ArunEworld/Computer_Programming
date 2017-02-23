// http://www.programiz.com/c-programming/examples/keyword-long

//	C Program to Demonstrate the Working of Keyword long
// The long is a size modifier, indicated by keyword long, that may increase the size of a variable during declaration. This program will demonstrate the working of long keyword.

#include <stdio.h>
int main()
{
    int a;
    long b;
    long long c;

    double e;
    long double f;


    printf("Size of int = %ld bytes \n", sizeof(a));
    printf("Size of long = %ld bytes\n", sizeof(b));
    printf("Size of long long = %ld bytes\n", sizeof(c));

    printf("Size of double = %ld bytes\n", sizeof(e));
    printf("Size of long double = %ld bytes\n", sizeof(f));

    return 0;
}

/*
Output

Size of int = 4 bytes
Size of long = 8 bytes
Size of long long = 8 bytes
Size of double = 8 bytes
Size of long double = 16 bytes

*/
/*
In this program, the sizeof operator is used to find the size of int, long, long long, double and long double.

The long keyword cannot be used with float and char type variables.
*/
