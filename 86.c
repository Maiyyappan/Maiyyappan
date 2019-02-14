#include<stdio.h>
void main()
{
char a[100];
int i,f=0,j,l1=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l1++;
}
for(i=0;i<l1;i++)
{
for(j=i+1;j<l1;j++)
{
if(a[i]==a[j])
f=1;
}
}
if(f==0)
printf("yes");
else
printf("no");
}
