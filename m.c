#include<stdio.h>
void main()
{
int i,n,count=0;
printf("enter n = ");
scanf("%d", &n);
for(i=2;i<n;i++)
{
if(n%i==0)
count=1;
break;
printf("it is prime");
else
printf("it is not prime");
}
}





