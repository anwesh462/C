#include<math.h>
#include<stdio.h>
void main()
{
int i,j,x,n,fact;
double term,sum=0;
printf("enter x,n ");
scanf("%d%d",&x,&n);
for(i=0;i<n;i++)
{
fact=1;
for(j=1;j<=i;j++)
{
fact=fact*j;
}
term=(pow(-1,i)*pow(x,i))/fact;
sum=sum+term;
}
printf("%lf",sum);
}
