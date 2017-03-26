/*If you are using character pointer for strings (not arrays) then 
change str1 and str2 to point each other’s data. i.e.,swap pointers.
In a function, if we want to change a pointer (and obviously we want
changes to be reflected outside the function) then we need to pass a
pointer to the pointer.
*/
#include<stdio.h>
 
/* Swaps strings by swapping pointers */
void swap1(char **str1_ptr, char **str2_ptr)
{
  char *temp = *str1_ptr;
  *str1_ptr = *str2_ptr;
  *str2_ptr = temp;
}  
  
int main()
{
  char *str1 = "Arun";
  char *str2 = "Eworld";
  swap1(&str1, &str2);
  printf("str1 is %s, str2 is %s", str1, str2);
  getchar();
  return 0;
}
