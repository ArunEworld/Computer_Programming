//www.aruneworld.com
//Write a program to find the smallest of N numbers using array
#include<stdio.h>
int main()
{
  int i, n, a[50], small;
  printf("Give the value of N :\n"); // maximum N value is 50.
  scanf("%d",&n);
  printf("Enter the numbers one by one\n");
  for(i=0;i<n;i++)  scanf("%d",&a[i]);
  small = a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]<small)  small = a[i];
  }
  printf("small number = %d", small);

  return 0;
}

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
