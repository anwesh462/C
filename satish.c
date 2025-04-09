#include<stdio.h>
void main()
{
int d,m,y;
printf("enter d,m,y");
scanf("%d%d%d",&d,&m,&y);
if(d<=31&&m<=12)
{
if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
{
if(d==31&&m==12)
{
d=1,m=1,y=y+1;
}
else
{
d=d+1;
}
}
else if(m==2&&d==29)
{
m=m+1;d=1;
}
else
{
if(d==30)
{
d=1,m=m+1;
}
else
{
d=d+1;
}
}
}
printf("%d%d%d",d,m,y);
}
