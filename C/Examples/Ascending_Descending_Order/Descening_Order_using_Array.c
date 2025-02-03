//Example-1
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

/**************************************************************************************************************/
//Example-2
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
            if(aew_arr[i]<aew_arr[i+1])
            {
                aew_temp = aew_arr[i];
                aew_arr[i] = aew_arr[i+1];
                aew_arr[i+1] = aew_temp;
            }
        }
    }
    
    printf("ArunEworld array Desending order values [%d]: ",(int)(sizeof(aew_arr)/sizeof(int)));
    for(int i=0;i<5;i++)
        printf("%d ",i[aew_arr]);

    return 0;
}


/* Output
ArunEworld default array values [5]: 20 30 10 25 1 
ArunEworld array Desending order values [5]: 30 25 20 10 1 

...Program finished with exit code 0
Press ENTER to exit console.

*/

/************************************************************************************************************/
//Example-3:
#include <stdio.h>
int main()
{
    int aew_temp, len=0,count=0, aew_arr[]={1,2,1,1,14,2,3,2,3,4};//,2,2,5,6,20,30,30,25,30};
    
    len = (int)(sizeof(aew_arr)/sizeof(int));
    printf("ArunEworld default array values [%d]: ",len);
    
    for(int i=0;i<len;i++)
    {
        printf("%d ",i[aew_arr]);
    }
        
    printf("\n\r");
    if(len !=1 && len != 0)
    {
        for(int i=0; i<len-1;i++)
        {
            for(int j=i; j<len-1;j++)
            {
                if(aew_arr[i]== aew_arr[j+1])
                {
                    for(int k=j+1;k<len-1;k++)
                        aew_arr[k]=aew_arr[k+1];
                        
                    len--;
                }
            }
        }
    }
    
    printf("ArunEworld array Desending order values [%d]: ",len);
    for(int i=0;i<len;i++)
        printf("%d ",i[aew_arr]);

    return 0;
}

