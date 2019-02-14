#include<stdio.h>
void main()
{
char a[100];
int i,l=0,c;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
c++;
}
c=l/2;
if(l%2!=0)
{
for(i=0;i<l;i++)
{
if(i==c)
a[i]='*';
}
printf("%s",a);
}
else
{
for(i=0;i<l;i++)
{
if(i==c)
{
a[i]='*';
a[i-1]='*';
}}
printf("%s",a);
}
}
