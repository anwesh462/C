#include<stdio.h>
void main()
{
int a;
printf("enter the value of a = ");
scanf("%d", &a);
int b;
printf("enter the value of b = ");
scanf("%d", &b);
int c;
printf("enter the value of c = ");
scanf("%d", &c);
if(a>b&&a>c)
{
if(b<c)
printf("ascending order %d,%d,%d", b,c,a);
else
printf("ascending order %d,%d,%d", c,b,a);
}
else if(b>a&&b>c)
{
if(a<c)
printf("ascending order %d,%d,%d", a,c,b);
else
printf("ascending order %d,%d,%d", c,a,b);
}
else
{
if(a<b)
printf("ascending order %d,%d,%d", a,b,c);
else
printf("ascending order %d,%d,%d", b,a,c);
}
}

