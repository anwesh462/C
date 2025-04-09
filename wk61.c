#include<stdio.h>
void main()
{
int n,j,i,t;
printf("enter size =");
scanf("%d", &n);
int a[n];
for(i=0;i<n;i++)
{
printf("enter element = ");
scanf("%d", &a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("after sorting:\n");
for(i=0;i<n;i++)
{
printf("%d\t", a[i]);
}
}

