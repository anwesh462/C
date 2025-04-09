#include<stdio.h>
void main()
{
int n,i;
printf("enter the size ");
scanf("%d", &n);
char a[n];
printf("enter your name ");
scanf("%s", a);
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
}
