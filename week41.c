#include<stdio.h>
void main()
{
int i,j,sum=0;
for(i=1;i<=200;i++)
{
if(i%2==0)
continue;
printf("%d\n", i);
}
for(j=1;j<=200;j++)
{
if(i%2!=0)
continue;
printf("%d\n ", j);
}
}


