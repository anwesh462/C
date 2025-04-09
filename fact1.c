#include<stdio.h>
void main()
{
int n,fact=1,i;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of n %d is %d:",n,fact);
}
