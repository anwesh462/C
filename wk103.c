#include<stdio.h>
void sum(int *,int);
void main()
{
int n,i;
printf("enter n:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("enter any no:");
scanf("%d",&a[i]);
}
sum(a,n);
}
void sum(int *p,int n)
{
int i,sum=0;
for(i=0;i<n;i++)
{
sum=sum+*(p+i);
}
printf("sum=%d",sum);
}
