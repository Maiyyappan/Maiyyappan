#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,N,count=0,pow,temp,rem,i,j,sum=0,temp1;
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
	{
		temp=i;
		temp1=i;
		N=i;
		while(N!=0)
		{
			N=N/10;
			count++;
		}	
		while(temp!=0)
		{
			rem=temp%10;
			pow=1;
			for(j=0;j<count;j++)
			{
				pow=pow*rem;
			}
			sum=sum+pow;
			temp=temp/10;
		}
		if(sum==temp1)
		{
			printf("%d ",sum);
		}
		
		sum=0;
		pow=1;
		count=0;
	}
	getch();
}
