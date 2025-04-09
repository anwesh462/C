#include<stdio.h>
void main()
{
int i,j,pc=0,c,n=2;
while(pc<100)
{
c=0;
for(i=2;i<n;i++)
{
if(n%i==0)
{
c++;
break;
}
}
if(c==0)
{
pc++;
printf("%d,",n);
}
n++;
}
}
