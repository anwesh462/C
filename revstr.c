#include<stdio.h>
void rev();
void main()
{
printf("enter any string:");
rev();
}
void rev()
{
char ch;
scanf("%c",&ch);
if(ch!='\n')
{
rev();
printf("%c",ch);
}
}
