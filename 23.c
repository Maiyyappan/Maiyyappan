#include<stdio.h>
void main()
{
int n,temp,i,j,a[20];
printf("enter the array of numbers");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%d",a[0]);
}
