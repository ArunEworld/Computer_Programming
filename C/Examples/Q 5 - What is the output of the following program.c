//  https://www.tutorialspoint.com/cprogramming/cprogramming_online_quiz.htm

//	Q 5 - What is the output of the following program?

#include<stdio.h>

main()
{
   struct student
   {
       int num = 10;
   }var;

   printf("%d", var.num);
}

/*
A - 10

B - Garbage

C - Runtime error

D - Compile error


Answer : D
Explanation

Structure elements cannot be initialized


*/
