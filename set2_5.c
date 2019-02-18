#include <stdio.h>
int main()
{
    char str[10];
    int i,c=0;
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='I'&&str[i+1]=='V')
        {
            c=4;
            break;
        }
        else
        {
            if(str[i]=='I'&&str[i+1]=='X')
            {
                c=9;
                break;
            }
            else
            {
                if(str[i]=='I')
                {
                    c=c+1;
                }
                if(str[i]=='V')
                {
                    c=c+5;
                }
                if(str[i]=='X')
                {
                    c=c+10;
                }
            }
        }
    }
    printf("%d",c);
    return 0;
}
