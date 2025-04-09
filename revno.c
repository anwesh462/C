#include<stdio.h>
int rev(int,int);
void main()
{
int n,sum=0;
printf("enter n:");
scanf("%d",&n);
printf("rev=%d",rev(sum,n));
}
int rev(int sum, int n)
{
if(n==0)
return sum;
else
return rev(sum*10+n%10,n/10);
}

