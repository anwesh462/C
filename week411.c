#include<stdio.h>
void main()
{
int esum=0,osum=0,i;
for(i=1;i<=200;i++)
{
	if(i%2==0)
	{
		esum=esum+i;
	}
	else
	{
		osum=osum+i;
	}
}
printf("Sum of 1st 100 even NOs is:%d\n",esum);
printf("Sum of 1st 100 odd  NOs is:%d\n",osum);
}
