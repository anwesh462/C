#include<stdio.h>
int main ()
{
	int d,m,y;
	printf("Enter Day:");
	scanf("%d",&d);
	printf("Enter Month:");
	scanf("%d",&m);
	printf("Enter Year:");
	scanf("%d",&y);
	printf("Today's date is: %d:%d:%d\n",d,m,y);
	d++;
	if(((m==4)||(m==6)||(m==9)||(m==11))&&d==31)
	{
		m++;
		d=01;
	}
	else if((m==2)&&d==29)
	{
		m++;
		d=01;
	}
	else if(((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10))&&d==32)
	{
		d=1;
		m++;
	}
	else if(m==12&&d==32)
	{
		y++;
		d=1;
		m=1;
	}
	printf("Tomorrow's date is: %d:%d:%d\n",d,m,y);
}
