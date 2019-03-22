#include <stdio.h>
#include <conio.h>
void main() 
{
	int n,s=0,sq,rem;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sq=rem*rem;
		s=s+sq;
		n=n/10;
	}
	printf("%d",s);
  getch();
}
