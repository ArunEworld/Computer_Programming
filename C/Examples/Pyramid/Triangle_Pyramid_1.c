//Triangle_Pyramid_1.c
#include<stdio.h>
int main()
{
	auto int size,row=1,column,sp;
 	printf("Enter loop repeat sizeber(rows): ");
 	scanf("%d",&size);
 	for(; size>=1; size--,row++)
 	{
  		for(sp=row; sp>1; sp--)	printf(" ");
  		for(column=1; column<=size; column++)  printf("#");
  		printf("\n");
 	}
	return 0;
}

/*
Enter loop repeat sizeber(rows): 5
#####
 ####
  ###
   ##
    #

*/
