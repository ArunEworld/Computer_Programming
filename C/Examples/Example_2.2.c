/* Example_2.2.c: The current year and the year in which the employee joined the organization are entered through the keyboard.
If the number of years for which the employee has served the organization is greater than 3 then a bonus of Rs. 2500/- is given
to the employee. If the years of service are not greater than 3, then the program should do nothing. */
/*
current_year
employee_joined_year
number_of_years			greater than 3
year_of_service
bonus				Rs 2500
total
*/

#include<stdio.h>
#include<string.h>
int main()
{
	int year_of_service, current_year, employee_joined_year, total;
	int	salary =10000;
	int bonus = 0;
	
	printf("Enter employee's current year and year of joining");
	scanf("%d%d",&current_year, &employee_joined_year);
	year_of_service = current_year - employee_joined_year;
	if(3 <= year_of_service);
		{
		bonus = 2500;
		}
	total = bonus + salary;
	printf("Employee's salary = %d", total);
}

/* OutPut
Enter employee's current year and year of joining
2017
2014
Employee's salary = 12500	*/

