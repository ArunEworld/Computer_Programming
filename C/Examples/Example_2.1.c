/* Example 2.1: While purchasing certain items, a discount of 10% offered. if the quantity purchased is more than 1000. 
If quantity and price per item are input through the keyboard, write a program to calculate the total expenses. */

#include<stdio.h>
#include<string.h>
int main()
{
	int quantity, discount = 0;
	float rate, total;
	printf("Enter the rate and Quatity");
	scanf("%f%d", &rate,&quantity);
	if(quantity >1000)
	{
	 discount =10;
	}
	total = (rate*quantity)-(rate*quantity/discount);
	printf("The total rate = %f", total);
}
/* Output

Enter the rate and Quatity
3
1001
The total rate = 2702.699951
--------------------------------
Process exited after 5.625 seconds with return value 0
Press any key to continue . . .

*/
