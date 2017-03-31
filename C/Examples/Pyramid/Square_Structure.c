//Squre_Structre.c
#include<stdio.h>
int main()
{
  auto int row, column, size;
  printf("Enter the size of the structure : ");
  scanf("%d", &size);
  for(row=1;size>=row;row++)
  {
    for(column=1;column<=size;column++)
    {
      printf("@");
    }
    printf("\n");
  }

}

/*
Enter the size of the structure : 6
@@@@@@
@@@@@@
@@@@@@
@@@@@@
@@@@@@
@@@@@@


*/
