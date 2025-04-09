#include<stdio.h>
#include<string.h>
struct student
{
int rollno;
char name[20];
int marks;
char grade;
};
void main()
{
int n,i;
printf("enter n:");
scanf("%d",&n);
struct student s[n];
for(i=0;i<n;i++)
{
printf("enter student %d details\n",i+1);
printf("enter roll no:");
scanf("%d",&s[i].rollno);
printf("enter name:");
scanf("%s",s[i].name);
printf("enter marks:");
scanf("%d",&s[i].marks);
printf("enter grade:");
scanf("%s",&s[i].grade);
}
char name[20],ch;
scanf("%c",&ch);
printf("enter name of student:");
gets(name);
for(i=0;i<n;i++)
{
if(strcmp(name,s[i].name)==0)
{
printf("%d",s[i].marks);
}
}
}
