#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{ n=n/10;
		sum++;
	}
    printf("%d",sum);
	getch();
}
