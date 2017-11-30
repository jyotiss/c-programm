#include<stdio.h>
int main()
{
 int n,sum=0,remainder,temp;
 printf("enter a number to check it is armstrong number or not\n");
 scanf("%d",&n);
 temp=n;
 while(temp!=0)
{ 
  remainder=temp%10;
  sum=sum+remainder*remainder*remainder;
  temp=temp/10;
}
  if(n==sum)
  printf("%d is a armstrong number",n);
  else
  printf("%d is not a armstrong number",n);
  return 0;
}  
