#include<stdio.h>
int main()
{
    int num, temp, remainder, reverse = 0;
    printf("Enter an integer \n");
    scanf("%d", &num);
    /*  original number is stored at temp */
    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Given number is = %d\n", temp);
    printf("Its reverse is  = %d\n", reverse);
    if (temp == reverse)
        printf("Number is a palindrome \n");
    else
        printf("Number is not a palindrome \n");
}

/*
Enter an integer
55055
Given number is = 55055
Its reverse is  = 55055
Number is a palindrome

*/
Enter an integer
67890
Given number is = 67890
Its reverse is  = 9876
Number is not a palindrome
/*

