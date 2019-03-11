#include<stdio.h>
void main()
{
char a[10],b[10];
int i,j,c=0;
clrscr();
scanf("%s%s",&a,&b);
for(i=0;a[i]!='\0';i++)
{
for(j=0;b[j]!='\0';j++)
{
if(a[i]==b[j])
{
c++;
}
}
}
if(c>0)
printf("yes");
else
printf("no");

getch();
}
