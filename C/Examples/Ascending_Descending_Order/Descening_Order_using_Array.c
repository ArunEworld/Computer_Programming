#include <stdio.h>

int main(void) {
  int n, a[]= {55,99,44,77,33,88,22,77,11,66};

  n = sizeof(a);
  n = n/4;
  int i,j,k,temp;
  printf("\n\t*****************\n");
   for (i=0; i<n; i++) printf("\t %d", a[i]); 
  printf("\n");
  printf("\n\t*****************\n");
   for(i=0;i<n;i++)
  {
  	for(j= i+1;j<n;j++)
  	{
  		if(a[i]>a[j])
  		{
  			temp = a[i];
  			a[i] = a[j];
  			a[j] = temp;
		  }
      for (k=0; k<n; k++) printf("\t %d", a[k]);
      printf("\n");
	}
  printf("\n");
}
printf("\n\t*****************\n");
   for (i=0; i<n; i++) printf("\t %d", a[i]); 
  return 0;
}


/* Output is
11	 22	 33	 44	 55	 66	 77	 77	 88	 99 
*/
