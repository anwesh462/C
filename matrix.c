#include<stdio.h>
void main()
{
int i,j,r,c;
printf("enter size of r,c");
scanf("%d%d" ,&r,&c);
int a[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("enter elements ");
scanf("%d", &a[i][j]);
}
}
printf("format of matrix");
printf("\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t", a[i][j]);
}
printf("\n");
}
}
