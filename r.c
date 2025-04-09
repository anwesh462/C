#include<stdio.h>
void main()
{
int i,n,count=0;
printf(" enter n = ");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
if(n%i==0)
count+=1;
}
if(count==2)
printf("it is a prime");
else
{
printf(" it is not a prime");
}
}
 






