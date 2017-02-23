//	http://www.c4learn.com/c-programs/swap-two-numbers-without-using-third.html

/*
Generally Swaping two number requires three variables , Let’s Take look at Procedure of swaping two Number
For Swaping Two numbers following procedure is used –
x = x ^ y --&gt; x^=y -- (1)
y = y ^ x --&gt; y^=x -- (2)
x = x ^ y --&gt; x^=y -- (3)

Now we will Explaining above three statements using example ….
Let x = 12 and y = 9 [ For our sake and simplicity consider number is of 4 bits ]
x = 1100
y = 1001

X-OR Table :
	A  		B  	 A X-OR B
	1		1		0
	1		0		1
	0		1		1
	0		0		0

Step 1 : After : x = x ^ y
x   = 1100
y   = 1001
----------
x^y = 0101
----------
x   = 0101    ..... New Value of x = 5

Step 2 : After y = y ^ x
x   = 0101    ..... New Value is taken
y   = 1001    ..... Old Value of Y
----------
y^x = 1100
----------
y   = 1100    ..... New Value of y = Initial x (y = 12)

Step 3 : After x = x ^ y
x   = 0101    ..... New Value from step 1
y   = 1100    ..... New Value of y from Step 2
----------
y^x = 1001
----------
x   = 1001    ..... New Value of x = Initial y

Here is Program for : [Swap / Interchange two variables [numbers] without using Third Variable]
*/
#include<stdio.h>

int main() {
   int num1, num2;

   printf("\nEnter First Number : ");
   scanf("%d", &num1);

   printf("\nEnter Second Number : ");
   scanf("%d", &num2);

   num1 = num1 ^ num2;
   num2 = num1 ^ num2;
   num1 = num1 ^ num2;

   printf("\n Numbers after Exchange : ");
   printf("\n Num1 = %d and Num2 = %d", num1, num2);

   return(0);
}

/*	Output : 
Enter First Number : 20
Enter Second Number : 40
Numbers after Exchange : num1 = 40 and num2 = 20
*/