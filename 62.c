#include<stdio.h>
void main()
{
char ch[100];
int i,c=0,l=0;
clrscr();
scanf("%s",&ch);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]=='1'||ch[i]=='0')
c++;
}
for(i=0;ch[i]!='\0';i++)
{
l++;
}
if(c==l)
printf("yes");
else
printf("no");
}
