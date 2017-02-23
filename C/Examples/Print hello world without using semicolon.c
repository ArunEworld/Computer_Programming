//	http://scanftree.com/programs/c/c-program-to-print-hello-world-without-using-semicolon/
//	C program to print hello world without using semicolon

#include<stdio.h>

//*******************************************************************************************//
//********************************** Method-1 ***********************************************//

int main()
{
	if(printf("Hello ArunEworld"))
	{
	}
}


/* OUTPUT

Hello ArunEworld
--------------------------------
Process exited after 0.02249 seconds with return value 0
Press any key to continue . . .
*/

//*******************************************************************************************//
//********************************** Method-2 ***********************************************//
int main()
{
	while(!printf("Heloo ArunEworld"))
	{
	}
}


/* OUTPUT
Heloo ArunEworld
--------------------------------
Process exited after 0.04089 seconds with return value 0
Press any key to continue . . .
*/


//*******************************************************************************************//
//********************************** Method-3 ***********************************************//
int main()
{
    switch(printf("Hello world"))
	{
		
    }
}