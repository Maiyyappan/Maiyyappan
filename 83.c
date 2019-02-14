#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,n;
char c;
clrscr();
scanf("%d %c %d",&a,&c,&b);
if(c=='/')
n=a/b;
else
n=a%b;
printf("%d",n);
getch();
}
