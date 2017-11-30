#include<stdio.h>
void main()
{
int n,i,sum=0,arr[10];
float avg;
printf("enter array size");
scanf("%d",&n);

printf("enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
avg=sum/n;
printf("AVERAGE:%f/n",avg);
}

