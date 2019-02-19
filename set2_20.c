#include <stdio.h>

int main()
{  
    char str[10];
    int n,i,a[10000],j=0,c=1;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    { 
        
        if(str[i]=='X')
        {
            printf("A");
        }
        if(str[i]=='Y')
        {
            printf("B");
        }
        if(str[i]=='Z')
        {
            printf("C");
        }
        if(str[i]>='A'&&str[i]<='W')
        {
            printf("%c",str[i]+3);
        }
    }
    return 0;
}
