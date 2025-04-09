#include<stdio.h>
#include<string.h>
void main()
{
int i,flag=0,len=0;
char s[10];
printf("Enter a String:");
gets(s);
printf("%s",s);
len=strlen(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]!=s[len-i-1])
{
flag=1;
break;
}
}
if(flag==1)
printf(" is not polindrome\n");
else
printf(" is polindrome\n");
}
