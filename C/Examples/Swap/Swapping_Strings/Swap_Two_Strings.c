/*
Output of the program is str1 is Eworld, str2 is Arun.
So the above swap() function doesn’t swap strings.
The function just changes local pointer variables and the changes are not reflected outside the function.
*/
#include<stdio.h>
void swap(char *str1, char *str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}  
  
int main()
{
  char *str1 = "Arun";
  char *str2 = "Eworld";
  swap(str1, str2);
  printf("str1 is %s, str2 is %s", str1, str2);
  getchar();
  return 0;
}

/*
Output
*/
