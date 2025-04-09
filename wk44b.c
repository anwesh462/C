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
for(j=1;j<=2*i+1;j++)
{
fact=fact*j;
}
term=(pow(-1,i)*pow(x,2*i+1))/fact;
sum=sum+term;
}
printf("%lf",sum);
}
