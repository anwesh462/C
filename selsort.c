#include<stdio.h>
void main()
{
int i,n,j,min,t;
printf("enter n:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("enter elements:");
scanf("%d",&a[i]);
printf("%d",a[i]);
}
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
{
min=j;
}
}
if(min!=i)
{
t=a[i];
a[i]=a[min];
a[min]=t;
}
}
printf("after sorting:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
