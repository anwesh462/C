#include<math.h>
#include<stdio.h>
void main()
{
int a,b,c,d;
double r1,r2;
printf("enter a, b, c ");
scanf("%d%d%d", &a,&b,&c);
d=(b*b)-(4*a*c);
if(d==0)
{
printf("roots real and equal ");
printf("roots are %d,%d",(-b)/(2*a),-b/(2*a));
}
else if(d>0)
{
printf("roots are real and distinct ");
r1=(-b+pow(d,0.5))/(2*a);
r2=(-b-pow(d,0.5))/(2*a);
printf("roots are %lf%lf",r1,r2);
}
}


