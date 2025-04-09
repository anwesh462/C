#include<stdio.h>
void main()
{
int i,n,max,min;
printf("enter size= ");
scanf("%d", &n);
int a[n];
for(i=0;i<n;i++)
{
printf("enter the element= ");
scanf("%d", &a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<n;i++)
{
if(max<a[i])
max=a[i];
if(min>a[i])
min=a[i];
}
printf("max=%d, min=%d", max,min);
}
