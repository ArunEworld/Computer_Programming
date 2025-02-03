//Example-1:
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

/*****************************************************************************/
//Example-2:
#include <stdio.h>

int main()
{
    int aew_temp, aew_arr[5]={20,30,10,25,1};
    
    printf("ArunEworld default array values [%d]: ",(int)(sizeof(aew_arr)/sizeof(int)));
    
    for(int i=0;i<5;i++)
    {
        printf("%d ",i[aew_arr]);
    }
        
    printf("\n\r");
    
    for(int j=0;j<(sizeof(aew_arr)/sizeof(int))-1;j++)
    {
        for(int i=0;i<(sizeof(aew_arr)/sizeof(int))-1;i++)
        {
            if(aew_arr[i]>aew_arr[i+1])
            {
                aew_temp = aew_arr[i];
                aew_arr[i] = aew_arr[i+1];
                aew_arr[i+1] = aew_temp;
            }
        }
    }
    
    printf("ArunEworld array Assending order values [%d]: ",(int)(sizeof(aew_arr)/sizeof(int)));
    for(int i=0;i<5;i++)
        printf("%d ",i[aew_arr]);

    return 0;
}

/* Output
ArunEworld default array values [5]: 20 30 10 25 1 
ArunEworld array Assending order values [5]: 1 10 20 25 30 

...Program finished with exit code 0
Press ENTER to exit console.
*/
