// write a c program which produces its own source code as its output

// http://scanftree.com/programs/c/write-a-c-program-which-produces-its-own-source-code-as-its-output/

#include<stdio.h>

int main()
{
	FILE *fp;
	char c;

//  fp = fopen(__FILE__, "r"); \
	__FILE__ is Standard Predefined Macros in C Programming.        \
	This macro will expand to the name of current file path.        \
	Suppose we have saved this source code at path - "c://tc/bin/file1.c"       \
	then "fp = fopen(__FILE__,"r");" will be expanded as –     fp = fopen("c://tc/bin/file1.c","r");

	fp = fopen(__FILE__, "r");
	do
	{
		c = getc(fp);
		putchar(c);
	}
	while(c!=EOF);
	fclose(fp);
	return 0;
}

/*
************************* OutPut ***********************************************

// write a c program which produces its own source code as its output

// http://scanftree.com/programs/c/write-a-c-program-which-produces-its-own-source-code-as-its-output/

#include<stdio.h>

int main()
{
        FILE *fp;
        char c;

//  fp = fopen(__FILE__, "r"); \
        __FILE__ is Standard Predefined Macros in C Programming.            \
        This macro will expand to the name of current file path.            \
        Suppose we have saved this source code at path - "c://tc/bin/file1.c"           \
        then "fp = fopen(__FILE__,"r");" will be expanded as û     fp = fopen("c://tc/bin/file1.c","r");

        fp = fopen(__FILE__, "r");
        do
        {
                c = getc(fp);
                putchar(c);
        }
        while(c!=EOF);
        fclose(fp);
        return 0;
}

 
--------------------------------
Process exited after 0.1161 seconds with return value 0
Press any key to continue . . .
*/
