#include<stdio.h>
void main()
{
int i,j,n=2;count,pc=0;
while(pc<=100)
{
count=0;
for(j=1;j<=n;j++)
{
if(i%j==0)
count+=1;
}
if(count==2)
{
pc=pc+1;
printf("%d ",i);
}
n=n+1;
}
}


