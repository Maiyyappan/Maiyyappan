#include <stdio.h>
#include<conio.h>
void main()
{   int N,i,rem;
    clrscr();
    scanf("%d",&N);
    while(N!=0)
    {
        rem=N%10;
        printf("%d",rem);
        N=N/10;
    }
    
    getch();
}
