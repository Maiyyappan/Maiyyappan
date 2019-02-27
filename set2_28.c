
#include <stdio.h>

int main()
{
    char str[20],i,j;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            printf("%c",str[i]);
        }
    }

    return 0;
}
