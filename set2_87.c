#include<stdio.h>
void main() 
{
	int n,k;
	float res;
	scanf("%d %d",&n,&k);
	res=n>>k;
	printf("%.2f",res);
}
