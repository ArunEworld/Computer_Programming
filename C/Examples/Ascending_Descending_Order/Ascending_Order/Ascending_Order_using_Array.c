//Write a program to arrange N given numbers in ascending
#include<stdio.h>
int main()
{
  int i, j, n, a[50], temp;
  printf("Give the value of N :\n"); // maximum N value is 50.
  scanf("%d",&n);
  printf("Enter the numbers one by one\n");
  for(i=0;i<n;i++)  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
  	for(j=i+1;j<n;j++)
  	{
  		if(a[i]>a[j])
  		{
  			temp = a[i];
  			a[i] = a[j];
  			a[j] = temp;
		  }
	}
  }
  printf("Printing the list = %d \n");
  for (i=0;i<n;i++) printf("%d\t",a[i]);

  return 0;
}

/* Output

Give the value of N :
4
Enter the numbers one by one
33
16
999
670
Printing the list = 999
16      33      670     999
*/

/* Output is
Give the value of N :
5
Enter the numbers one by one
10
30
15
24
1
small number = 1
*/
