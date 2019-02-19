#include <stdio.h>
void main()
{
	int z,x,flag=0,c=0;
	int t,k;
	scanf("%d %d",&z,&x);
	for(k=z;k<=x;k++)
	{
	for(t=2;t<k;t++)
	{
		if(k%t==0)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		c=c+1;
	}
	}
	printf("%d",count);
}
