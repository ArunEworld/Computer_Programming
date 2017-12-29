/*
*	www.ArunEworld.com
*	Example : Variable always returns their initialized value
*	This Below Program was compiled using online compiler "gcc version 4.6.3" in https://repl.it/@ArunEworld/C
*/

#include<stdio.h>

int main()
{
	printf("ArunEworld : Variable Initialize Puzzles\n");
	int a=1,b=3;
	b = (a=2);
	printf("The value is b : %d",b);
	return 0;
}

/* Output
	ArunEworld : Variable Initialize Puzzles
	The value is b : 2  
*/

/******************************************
*	Variable always returns their initialized value. 
*		for this example You need to have knowledge about "printf" function, variable declaration and  initialize.
*
*	In the above program when execution
*		Step 1 : Line 11 - 	print the some strings ""ArunEworld : Variable Initialize Puzzles" and execute the \n command also so next print go to new line
*		Step 2 : Line 12 -  two variable was declared and initialized. a = 1 and b =3.
*		Step 3 : Line 13 - 	b = (a=2); (Here it returns the "a" updated value, not return "1" value. so it will return 2 value.
*							b = 2;	
*		Step 4 : Line 14 -	printing the b value as b=2 ("The value is b : 2")
*		
*
******************************************/