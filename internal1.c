#include<stdio.h>
void main()
{
int r1,c1,r2,c2,i,j;
printf("enter r1, c1:");
scanf("%d%d",&r1,&c1);
printf("enter r2, c12:");
scanf("%d%d",&r2,&c2);
if(r1==r2 && c1==c2)
{
int a[r1][c1],b[r2][c2],c[r1][c2];
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("enter elements of a:");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("enter elements of b:");
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r2;i++)
{
for(j=0;j<c1;j++)
{
c[i][j]=a[i][j]-b[i][j];
}
}
printf("resultant matrix c=\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
else
{
printf("subtraction not possible");
}
}


