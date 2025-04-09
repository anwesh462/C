#include<stdio.h>
void main()
{
int a;
printf("enter a = ");
scanf("%d", &a);
int b;
printf("enter b = ");
scanf("%d", &b);
int c;
printf("enter c = ");
scanf("%d", &c);
if(a>b&&a>c)
{
printf(" a is the greater number ");
}
else if(b>a&&b>c)
{
printf(" b is the greater number ");
}
else if(c>a&&c>b)
{
printf (" c is the greater number ");
}
else
{
printf(" all are equal");
}
}


