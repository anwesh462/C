#include<stdio.h>
void main()
{
int n,j,i,t,mid,f,l,search,found=0;
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
printf(" enter search element ");
scanf("%d", &search);
f=0,l=n-1;
while(f<l)
{
mid=(f+l)/2;
if(search==a[mid])
{
found=1;
break;
}
else if(search>a[mid])
{
f=mid+1;
}
else
{
l=mid-1;
}
}
if(found==1)
printf("element found ");
else
printf("element not found ");
}


