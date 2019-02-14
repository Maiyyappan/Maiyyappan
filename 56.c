#include<stdio.h>
void main()
{
char ch[100];
int i,l=0,c=0;
clrscr();
scanf("%s",&a);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]!='.'&&ch[i]!=','&&ch[i]!='$'&&ch[i]!='*'&&ch[i]!='@')
{
if(ch[i]>=97&&ch[i]<=122||ch[i]>=65&&ch[i]<=90||ch[i]>=47&&ch[i]<=58)
c++;
}
}
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]!='.'&&ch[i]!=','&&ch[i]!='$'&&ch[i]!='*'&&ch[i]!='@')
l++;
}
if(c==l)
printf("yes");
else
printf("no");
getch();
}
