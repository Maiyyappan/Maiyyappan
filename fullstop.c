#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{   int c;
    char a[1000];
    clrscr();
    scanf("%s",a);

    c=strlen(a);
    a[c++]='.';
    printf("%s",a);
    getch();
}
