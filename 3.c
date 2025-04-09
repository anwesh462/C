#include<stdio.h>
#include<math.h>
void main()
{
int n,x,fact,j,i;
double sum=0,term;
printf("enter n,x:");
scanf("%d%d",&n,&x);
for(i=0;i<n;i++)
{
fact=1;
for(j=1;j<2*i;j++)
{
fact=fact*j;
}
term=(pow(-1,i))*(pow(x,2*i))/fact;
sum=sum+term;
}
printf("%lf",sum);
}
