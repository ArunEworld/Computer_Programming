//  http://www.programiz.com/c-programming/examples/vowel-consonant

/*
C Program to Check Whether a Character is Vowel or Consonant
In this example, if...else statement is used to check whether an alphabet entered by the user is a vowel or a constant.
*/
// Example #1: Program to Check Vowel or consonant
#include <stdio.h>
int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
/*
Output

Enter an alphabet: G
G is a consonant.

*/
/*
The character entered by the user is stored in variable c.

The isLowerCaseVowel evaluates to 1 (true) if c is a lowercase vowel and 0 (false) for any other character.

Similarly, isUpperCaseVowel evaluates to 1(true) if c is an uppercase vowel and 0 (false) for any other character.

If both isLowercaseVowel and isUppercaseVowel is equal to 0, the test expression evaluates to 0 (false) and the entered character is a consonant.

However, if either isLowercaseVowel or isUppercaseVowel is 1 (true), the test expression evaluates to 1 (true) and the entered character is a vowel.

The program above assumes that the user always enters an alphabet. If the user enters any other character other than an alphabet, the program will not work as intended.
*/
