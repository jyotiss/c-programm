#include<stdio.h>
void main()
{
int n,i,sum=0,a[100];
printf("enter the value ofn");
scanf("%d",&n);
for(i=1;i<=n;i++){
a[i]=i;
}
for(i=1;i<=n;i++){
sum=sum+a[i];
}
printf("%d",sum);
}
