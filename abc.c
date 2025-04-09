#include<stdio.h>
void main()
{
char d;
printf("enter a string");
scanf("%s", &d);
int a;
printf("enter a integer");
scanf("%d", &a);
float b;
printf("enter a float");
scanf("%f", &b);
char c;
printf("enter a character");
scanf("%c", &c);
printf("%s%d%f%c", d,a,b,c);
}
