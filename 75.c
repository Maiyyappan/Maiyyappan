#include<stdio.h>
void main()
{
char a[100];
int i,l1=0,k;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l1++;
}
k=l1/2;
if(l1%2!=0)
{
for(i=0;i<l1;i++)
{
if(i==k)
a[i]='*';
}
printf("%s",a);
}
else
{
for(i=0;i<l1;i++)
{
if(i==k)
{
a[i]='*';
a[i-1]='*';
}}
printf("%s",a);
}
}
