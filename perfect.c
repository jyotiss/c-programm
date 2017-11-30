/****Program for determing whether the no. is perfect no.****/
#include<stdio.h>
int main()
{
	int number, index1= 1, sum_of_divisors= 0;
	printf("Enter a num:");
	scanf("%d",&number);
	while(index1 < number)
	{
 		if(number%index1 == 0)
		{
 		sum_of_divisors = sum_of_divisors+index1 ;
		}
		index1 = index1 + 1 ;
		
 	
	}
		if(sum_of_divisors == number)
 		printf("%d is perfect number",index1);
		else
		printf("%d is not a perfect number",index1);
return 0;
}
/****Output****
dell@dell-OptiPlex-7040:~$ gcc perfect.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter a num:6
6 is perfect numberdell@dell-OptiPlex-7040:~$ ./a.out
Enter a num:4
4 is not a perfect numberdell@dell-OptiPlex-7040:~$ gedit perfect.c
*/
