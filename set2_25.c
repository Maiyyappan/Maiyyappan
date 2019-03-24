#include <stdio.h>
void main() 
{
	char s[50],d;
	int i,j,c=1,max=1;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
		if(s[i]==s[j])
		{
			c=c+1;
			if(c>max)
			{
				max=c;
				d=s[i];
			}
		}
		}	}
	printf("\n%c",d);
}
