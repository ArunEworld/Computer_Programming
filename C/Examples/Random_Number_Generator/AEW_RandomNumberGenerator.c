/////************************ two Digit ***************//
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

/**************** five Digit ****************************************/



#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int c, n;
 
  printf("Ten random numbers in [1,100]\n");
 
  for (c = 1; c <= 10; c++) {
    n = rand() % 100000+ 1;
    printf("%d\n", n);
  }
 
  return 0;
}
/* Output *
42
18468
6335
26501
19170
15725
11479
29359
26963
24465

*/
