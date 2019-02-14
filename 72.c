#include<stdio.h>
void main()
{
char a[100];
int i,f1=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
f1=1;
}
if(f1==1)
printf("yes");
else
printf("no");
}
