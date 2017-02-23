#include<stdio.h>
#include<stdio.h>
int main()
{
	FILE *fp;

	int Row_1[300];
	char Row_2[300];
	fp = fopen("Arun.xlsx", "r");

	/*	char login_details[20], user_name[10], password[10];
		printf("eneter your user name :");
		gets(user_name);
		printf("eneter your user name :");
		gets(password);

		memcpy(login_details, user_name, sizeof(usewr_name));
	 cpymemmemcpy(login_details + 1 password, sizeof(password));

		int length = strlen(login_details);
		printf("%d\n",length);
	*/
	//	fp = fopen("Arun.txt","w");
		if(fp == NULL)
		{
			printf("unable to open");
		}
		else
		{
			
			fscanf(fp,"%d %s \n",&Row_1,&Row_2);
			
	/*
			int i;
		for(i=0;i<length;i++)
			fputc(login_details[i	,fp);
	*/	}

	//	printf("Successfully writtern your deatils");
	//	printf("\n %s \n %s\n %s", login_details, user_name, password);
	fprintf(stdout,"First Line is %d%s\n",&Row_1,&Row_2);
		fclose(fp);
}
/*
#include<stdio.h>?
void main()
{
FILE *fp;
int Row_1[300];
char Row_[300];
fp = fopen("Arun.xlsx", "r");

fclose(fp);

}
*/
