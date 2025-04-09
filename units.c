#include<stdio.h>
void main()
{
int n,unit,hun,ten;
printf("enter a three digit no;");
scanf("%d",&n);  //n=347
unit=n%10;   //unit=7
n=n/10;     //n=34
ten=n%10;  // ten=34%10=4
n=n/10;    // n=34/10=3
hun=n%10;
printf("%d hundereds\n",hun);
printf("%d tens\n",ten);
printf("%d units\n",unit);
}

