//Binary to Deccimal using call by value
#include<stdio.h>
unsigned int btd(unsigned int dec);
int main()
{
	int vin0=1111111111,c;
	c=btd(vin0);
	 printf("%d\n",c);
      return 0;
}

unsigned int btd(unsigned int dec)  //Binary to decimal
{
	int a,b,c=0,x=1;
	while(dec)
	{
	 	b=dec%10;
	    c=c+(b*x);
	    x=x*2;
	    dec=dec/10;
	}
	a=c;
	return a;
}
