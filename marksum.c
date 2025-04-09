#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("enter how many subjects = ");
scanf("%d", &n);
int a[n];
for(i=0;i<n;i++)
{
printf("enter subject-(%d+1)marks= ",i);
scanf("%d", &a[i]);
sum=sum+a[i];
}
printf("sum=%d, avg=%d", sum,sum/n);
}
