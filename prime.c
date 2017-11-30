#include<stdio.h>
int main()
{
	int num,i,temp;
	for(num=2;num<=100;num++)
	{ 
	    for(i=2;i<num;i++)
	    {
                temp=0;

	        if(num%i==0)
	          temp++; 
		  break; 
	 
	         
            }
                if(temp==0)
	          { printf("%d",num);
	            printf(" ");
                  }
         }
         return 0;
}

