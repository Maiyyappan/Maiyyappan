#include <stdio.h>
#include<conio.h>
void main()
{   int N,fact=1,i;
    clrscr();
    scanf("%d",&N);
    if(N<=20)
    for(i=1;i<=N;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    getch();

}
