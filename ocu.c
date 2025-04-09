#include<stdio.h>
#include<string.h>
void main()
{
char s[100],ch,t;
int i,count=0;
printf("entr string ");
gets(s);
printf("enter char =");
scanf("%c",&ch);
for(i=0;s[i]!='\0';i++)
{
if(ch==s[i])
count++;
}
printf("%c is found %d times", ch,count );
}
