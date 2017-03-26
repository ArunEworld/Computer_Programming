//Char_Array_example
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	
unsigned char check[60]="*";
unsigned char count[60];
unsigned char count1[60];
unsigned char count2[60];
 char rec[60];
 char rec1[60];
 char rec2[60];
long int i,j,k,p=0,q=0,r=0;
long int final1,final2,final3;
	i=12376233;
	j=347576;
	k=1276767;
	static int l;
    
	sprintf(count,"%ld",i);
	sprintf(count1,"%ld",j);
    sprintf(count2,"%ld",k);
    
    
	strcat(count,"#");
    strcat(count1,"@");
    strcat(count2,"$");
	strcat(count,count1);
    strcat(count,count2);
    strcat(check,count);
    
    printf("%s",check);
    
	while(check[l]!='\0')
	
        { 
		    
		       if(check[l]=='*')
			    {
			         l++;
		        	while(check[l]!='#')
                      {
			
	   	                rec[p]=check[l];
	   	      
				        l++;
	   	                p++;
	   	              }  
	   	        }
			  		
			   if(check[l]=='#')
                {
			        l++;
		         	while(check[l]!='@')
			          {  
			
	   	                rec1[q]=check[l];
	   	      
			       	    l++;
	   	                q++;
	   	              }
	   	   	    }	 
			   if(check[l]=='@')	
		        {
		   	        l++;
					   while(check[l]!='$')
				   
                      {				
					    rec2[r]=check[l];
	   	      
				        l++;
	   	                r++;
	   	       
		            }
		        } 
               else
		        {
       
	               l++;
			       rec[p]='\0';
	               rec1[q]='\0';
	               rec2[r]='\0';
	    	    }
        
        
	   	
	    } 

final1=atoi(rec);
final2=atoi(rec1);
final3=atoi(rec2);

 printf("\n%s\n",rec);
 printf("%s\n",rec1);
 printf("%s\n",rec2);
 
 printf("\n%d\n",final1);
 printf("%d\n",final2);
 printf("%d\n",final3);
}


/*OutPut

*12376233#347576@1276767$
12376233
347576
1276767

12376233
347576
1276767
*/
