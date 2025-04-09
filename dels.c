#include<stdio.h>
#include<string.h>
void main()
{
int i,n,p,l;
char s[20];
printf("enter string ");
gets(s);
printf("enter no of pos & no of char :");
scanf("%d%d",&p,&n);
l=strlen(s);
for(i=0;i<l;i++)
{
if(i==p)
i=i+n-1;
else
printf("%c",s[i]);
}
}
