#include<stdio.h>
void main()
{
int a,b;
float c;
printf("enter a , b ");
scanf("%d%d", &a,&b);
float d= a;
float e= b; //casting
c=(d/e)*100;
printf("%d is %0.2f %% of %d\n",a,c,b);
}

