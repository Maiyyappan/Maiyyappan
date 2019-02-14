#include<stdio.h>
void main()
{
char a[100];
int j;
clrscr();
scanf("%s",&a);
for(j=0;a[j]!='\0';j++)
{
if(j%2==0)
{
printf("%c",a[j]);
}
}
printf("\t");
for(j=0;a[j]!='\0';j++)
{
if(j%2!=0)
{
printf("%c",a[j]);
}
}
}
