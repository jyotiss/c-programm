#include<stdio.h>
int arr(int x[], int y[],int n)
{
int z,sum;
for(z=1;z<=5;z++)
{
sum=x[z]+y[z];
printf("%d",sum);
}
}
void main()
{
int n=5;
int a[5],b[5],i;
for(i=0;i<5;i++)
scanf("%d %d",&a[i],&b[i]);
arr(a[],n);
}


