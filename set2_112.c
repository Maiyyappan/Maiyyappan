#include<stdio.h
#include<conio.h>
void main()
{
    int l,a[100],i,sum;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=l;i++)
    sum=sum+i;
    printf("%d",sum);
    getch();
}
