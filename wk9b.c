#include<stdio.h>
int fib(int);
void main()
{
int n,i;
printf("enter nth term:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d ",fib(i));
}
}
int fib(int n)
{
if(n==1)
return 0;
else if(n==2)
return 1;
else
return fib(n-1)+fib(n-2);
}
