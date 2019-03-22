#include <stdio.h>
#include <conio.h>
void main() 
{
	int n,s=0,sum,rem;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=rem*rem;
		s=s+sum;
		n=n/10;
	}
	printf("%d",s);
  getch();
}
