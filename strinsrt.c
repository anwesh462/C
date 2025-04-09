#include<stdio.h>
#include<string.h>
void str1(char[],char[],int p);
int main()
{
char a[30],b[30];
int p;
printf("enter main string:");
gets(a);
printf("enter substring:");
gets(b);
printf("enter position=");
scanf("%d",&p);
printf("after string insertion:\n" );
str1(a,b,p);
}
void str1(char a[],char b[],int p)
{
char c[30];
int i,j,k,l1,l2,m,n;
l1=strlen(a);
l2=strlen(b);
for(i=0;i<p;i++)
{
c[i]=a[i];
}
for(j=0;j<l2;j++)
{
c[i]=b[j];
i++;
}
for(k=p;k<l1;k++)
{
c[i]=a[k];
i++;
}
c[i]!='\0';
printf("%s",c);
}

