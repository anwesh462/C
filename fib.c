#include<stdio.h>
void fib(int);
void fib(int n)
{
int a=0,b=0,c,i;
for(i=1;i<=n;i++)
{
c=a+b;
a=b;
a=c;
}
printf("%d",c);
}
void main()
{
int n;
printf("enter the nth term:");
scanf("%d",&n);
if(n==1)
printf("0");
else if(n==2)
printf("1");
else
fib(n);
}
