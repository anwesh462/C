#include<stdio.h>
struct student
{
int id;
int marks;
char name[10];
};
void main()
{
struct student s1,*p;
p=&s1;
printf("enter student details:");
scanf("%d%s%d",&s1.id,&s1.name,&s1.marks);
printf("%d\n%s\n%d",p->id,p->name,p->marks);
}


