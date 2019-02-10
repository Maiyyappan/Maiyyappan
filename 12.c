#include<stdio.h>
#include<conio.h>
void main()
{
	int N,temp,sum=0,rem;
	scanf("%d",&N);
	temp=N;
		while(N!=0)
		{
			rem=N%10;
			sum=(sum*10)+rem;
			N=N/10;
		}
		if(temp==sum)
		{
		    printf("yes");
		}
		else
		{
			printf("no");
		}
	getch();
}
