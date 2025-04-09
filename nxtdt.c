#include<stdio.h>
void main()
{
int d,m,y;
printf("enter date,month,year=");
scanf("%d%d%d",&d,&m,&y);
if(d>0 && d<28)
if(d==28)
{
if(m==2)
{
if(y%400==0 ||y%100==0 ||y%4==0 )
{
d=29;
}
else
{
m=3;
d=1;
}
}
else
d++;
}
if(d==29)
{
if(m==2)
d=1;
m=3;
}
else
d++;
if(d==30)
{
if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
d++;
else
{
m++;
d=1;
}
if(d==31)
{
d=1;
if(y==12)
y++;
m=1;
}
else
m++;
}
printf("next date is:%d-%d-%d",d,m,y);
}

