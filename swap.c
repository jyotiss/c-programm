/****Program for swapping of two numbers with temporary no.****/
#include<stdio.h>
void main()
{
	int firstno, secondno, tempno;
//tempno is a temporary number
	printf("Enter firstno. and secondno");
	scanf("%d%d" ,&firstno, &secondno);
tempno=firstno;
firstno=secondno;
secondno=tempno;
	printf("The swapped numbers are firstno=%d,secondno=%d", firstno, secondno);
}
/****output****/
dell@dell-OptiPlex-7040:~$ gcc swap.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter firstno. and secondno
4 5
The swapped numbers are firstno=5,secondno=4dell@dell-OptiPlex-7040:~$ file:///home/dell/perfect.c 



