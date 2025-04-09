#include<stdio.h>
void main()
{
int a;
printf("enter the value of a =");
scanf("%d", &a);
int b;
printf(" enter the value of b =");
scanf("%d", &b);
if(a<b)
{
printf(" up ");
}
else if(a>b)
{
printf(" down ");
}
else
{
printf("a is equal to b");
}
}

