#include<stdio.h>
void main()
{
int n,h,t,u;
printf("enter n=");
scanf("%d",&n);
h=((n/10)/10);
t=((n/10)%10);
u=(n%10);
if(n>99&&n<999)
printf("%dhundreds,%dtens,%dunits",h,t,u);
}
