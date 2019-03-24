#include <stdio.h>
void main() 
{
	signed int n;
	scanf("%d",&n);
	if(n>=-32768 && n<=32767)
	{
		printf("INT");
	}
	else
	{
		printf("LONG");
	}}
