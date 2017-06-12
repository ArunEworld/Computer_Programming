//Refer : https://www.tutorialspoint.com/c_standard_library/c_function_rand.htm
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, n;
   time_t t;
   
   n = 5;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n ; i++ ) 
   {
      printf("%d\n", rand() % 50);
   }
   
   return(0);
}

/* Output 
14
9
29
20
30




*/
