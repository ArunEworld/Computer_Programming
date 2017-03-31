//Triangle_Pyramid_3.c
#include<stdio.h>
int main()
{
	auto int size,column,row,sp;
 	printf("Enter loop repeat sizeber(rows): ");
 	scanf("%d",&size);

 for(row=1;size>=row;row++)
 	{
 		for(sp=(size-row);sp>=1;sp--)	printf(" ");
 		for(column=1;column<=row;column++)printf("@");
 		printf("\n");
 	}
 	
	return 0;
}

/*
Enter loop repeat sizeber(rows): 5
    @
   @@
  @@@
 @@@@
@@@@@
*/
