#include<stdio.h>
void fact(int);
void fact(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d!=%d",n,fact);
}
void main()
{
int n;
printf("enter n =");
scanf("%d",&n);
fact(n);
}

