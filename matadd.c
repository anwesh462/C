#include<stdio.h>
void main()
{
int i,j,r1,c1,r2,c2;
printf("enter the size of a :");
scanf("%d%d",&r1,&c1);
printf("enter the size of b :");
scanf("%d%d",&r2,&c2);
if(r1==r2 && c1==c2)
{
int a[r1][c1],b[r2][c2],c[r1][c2];
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("enter elements of a :");
scanf("%d", &a[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("enter elements b :");
scanf("%d", &b[i][j]);
}
}
printf("matrix a = \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t", a[i][j]);
}
printf("\n");
}
printf("matrix of b = \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t", b[i][j]);
}
printf("\n");
}
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("resultant matrix = \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t", c[i][j]);
}
printf("\n");
}
}
else
printf("matrix addition not possible ");
}
