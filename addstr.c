#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100],ch;
int i,j=0,l1,l2,p;
printf("enter s1:");
scanf("%c",&ch);
gets(s1);
printf("enter s2:");
gets(s2);
printf("enter pos:");
scanf("%d",&p);
l1=strlen(s1);
l2=strlen(s2);
char s3[l1+l2];
for(i=0;i<p;i++)
{
s3[j]=s1[i];
j++;
}
for(i=0;s2[i]!='\0';i++)
{
s3[j]=s2[i];
j++;
}
for(i=p;s1[i]!='\0';i++)
{
s3[j]=s1[i];
j++;
}
s3[j]='\0';
puts(s3);
}
