#include<stdio.h>
void main()
{
int flag=0,i,j;
char s1[20],s2[20];
printf("enter s1 , s2");
gets(s1);
gets(s2);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]==s2[0])
{
flag=1;
for(j=0;s2[j]!='\0';j++)
{
if(s1[i+j]!=s2[j])
{
flag=0;
break;
}
}
if(flag==1)
break;
}
}
if(flag==1)
printf("word found");
else
printf("not found");
}
