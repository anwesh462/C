#include<stdio.h>
void main()
{
int i,n,search,found=0;
printf("enter the size =");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("enter the element=");
scanf("%d",&a[i]);
}
printf("enter search= ");
scanf("%d", &search);
for(i=0;i<n;i++)
{
if(search==a[i])
{
found=1;
break;
}
}
if(found==1)
printf("element found at %d", i);
else
printf("elemnt not found ");
}
