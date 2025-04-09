#include<stdio.h>
#include<string.h>
void main()
{
int i,len=0,flag=0;
char a[40];
printf("enter a string: ");
gets(a);
len=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=a[len-i-1])
{
flag=1;
break;
}
}
if(flag==1)
printf("string is not palindrome");
else
{
printf("string is palindrome ");
}
}
