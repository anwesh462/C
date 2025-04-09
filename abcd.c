#include<stdio.h>
void main()
{
int r1,c1,r2,c2,i,j;
printf("enter matrix a size= ");
scanf("%d%d",&r1,&c1);
printf("enter matrix b size=");
scanf("%d%d",&r2,&c2);
if(r1==r2 && c1==c2)
{
int a[r1][c1],b[r2][c2],c[r1][c2];
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("enter matrix a elements");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("enter matrix b elements");
scanf("%d",&b[i][j]);
}
}
printf("matrix a=\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("matrix b =\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++);
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
for(i=0;i<r1;i++)
{
for(j=0;j<r2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("matrix after addition =\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++);
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
else
{
printf("matrix addition not possible");
}
}
