/* Example 2.3: In a company an employee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of 
basic salary and DA = 90% of basic salary. If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and
DA = 98% of basic salary. If the employee's salary is input through the keyboard write a program to find his gross salary. */
/*
1500 less
House_Rent_Allowance = 10%
Dearness_Allowance = 90%
1500 greaterthan equals
House_Rent_Allowance = 500
Dearness_Allowance = 98%
*/
#include<stdio.h>

int main()
{
	int	BS, GS, HRA, DA;
	printf("Enter the basic salary");
	scanf("%d", &BS);
	if (BS < 1500)
		{
			HRA = ((BS/100)*10)+BS;
			DA = ((BS/100)*90)+BS;
		}
	else
		{
			HRA = 500;
			DA = ((BS/100)*98)+BS;
		}
	GS = BS + HRA + DA;
	printf("the BS is %d\n",BS);
	printf("the HRA is %d\n",HRA);
	printf("the DA is %d\n",DA);
	printf("the Gross Salary is %d",GS);
}

/* Output
Enter the basic salary2000
the BS is 2000
the HRA is 500
the DA is 3960
the Gross Salary is 6460
*/
