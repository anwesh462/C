#include<stdio.h>
int revn(int,int);
void main()
{
int n,sum=0;
printf("enter number=");
scanf("%d",&n);
printf("reverse of number %d",n);
sum=revn(n,sum);
printf("%d",sum);
}
int revn(int n,int sum)
{
if(n==0)
{
return n;
}
else
{
return revn(n/10,sum*10+n%10);
}
}
