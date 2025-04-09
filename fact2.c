#include<stdio.h>
void main()
{
int n,res;
printf("enter the number:");
scanf("%d",&n);
res=fact(n);
printf("%d!=%d",n,res);
}
int fact(int n)
{
if(n==1)
return 1;
else
return n*fact(n-1);
}

