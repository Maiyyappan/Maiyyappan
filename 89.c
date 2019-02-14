#include<stdio.h>
void main()
{
char a[100];
int i,len=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
len++;
}
for(i=len-1;i>=0;i--)
{
printf("%c",a[i]);
}
}
