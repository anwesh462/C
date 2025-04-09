#include<stdio.h>
void main()
{
int a,b,c;
printf("enter a,b,c:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("%d a is greater ",a);
}
else if(b>a && b>c)
{
printf("%d b is greater ",b);
}
else if(c>a && c>b)
{
printf("%d c is graeter ",c);
}
else
{
printf("all are equal ");
}
}
