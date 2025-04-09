#include<stdio.h>
void main()
{
int i,word=1,lines=1,ch=0;
char a[100];
printf("enter  the text: ");
scanf("%[^;]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
word++;
}
else if(a[i]=='\n')
{
lines++;
word++;
}
else
{
ch++;
}
}
printf("no of words %d,no of lines %d,no of char %d",word,lines,ch);
}

