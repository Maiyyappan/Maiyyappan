#include <stdio.h>
#include<string.h>
void main() {
	char in1[100],in2[100];
	scanf("%s %s",in1,in2);
	int m,n,i,j,u,v,w,x,y,z,c=0;
	m=strlen(in1);
	n=strlen(in2);
	if(m==n)
	{
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			u=in1[i];
			v=in1[j];
			w=in2[i];
			x=in2[j];
			y=u-v;
			z=w-x;
			if(y==z)
			{
				c=1;
			}
			else
			{
				c=0;
				break;
			}
		}
	}
	}
	else
	{
		printf("no");
	}
	if(c==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

}
