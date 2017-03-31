//Triangle_Pyramid_2.c
#include<stdio.h>
int main()
{
	auto int size,column;
 	printf("Enter loop repeat sizeber(rows): ");
 	scanf("%d",&size);
 //	
 for(;size>=1;size--)
 	{
		for(column=1;column<=size;column++)
 		{
 			printf("@");
		}
  		printf("\n");
 	}
	return 0;
}

/*
Enter loop repeat sizeber(rows): 5
@@@@@
@@@@
@@@
@@
@


*/
