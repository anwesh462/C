#include<stdio.h>
void main()
{
int i,n,count=0;
printf("print a number n ");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count+=1;
}
}
if(count==2)
printf("given number is prime");
else
printf("number is not prime");
}


