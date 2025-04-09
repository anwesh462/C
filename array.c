#include<stdio.h>
void main()
{
int n,i;
printf("enter the size of arrzy = ");
scanf("%d", &n);
int a[n];
for(i=0;i<n;i++)
{
printf("enter the element ");
scanf("%d", &a[i]);
}
for(i=0;i<n;i++)
{
printf("%d,", a[i]);
}
}
