#include<stdio.h>
void main(){
int i,count=0;
while(1)
{
printf("enter the guess");
scanf("%d",&i);
if(i>=1 && i<=10)
{
printf("guess correct");
break;
}
else{
printf("wrong guess");
count=count+1;
}
}
}


