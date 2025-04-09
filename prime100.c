#include<stdio.h>
int main()
{
int i,j,n=2,pc=0,c;
while(pc<100)
{	
	//c=0;
	for(i=2;i<=n;i++)
	{	
		c=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				c++;
		}
		if(c==0)
		{	
			//pc++;
			printf("%d,",i);
		}
	}
	n++;
	pc++;
}
}
