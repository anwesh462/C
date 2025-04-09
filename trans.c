#include<stdio.h>
void main()
{
int i,j,r1,c1;
printf("enter row,column size ");
scanf("%d%d",&r1,&c1);
int a[r1][c1];
if(r1==c1)
{
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("enter elements:");
scanf("%d",&a[i][j]);
}
}
printf("matrix before transpose\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("matrix after transpose\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",a[j][i]);
}
printf("\n");
}
}
else
{
printf("matrix transpose not possible");
}
}

