#include <stdio.h>

int main()
{   char str[1000],str1[1000];
    int n,i,k=0;
    scanf("%d",&n);
    scanf("%s",str);
    for(i=n-1;i>=0;i--)
    { 
        str1[k]=str[i];
        k++;
    }
    for(i=0;i<n;i++)
    {
    if(str1[i]!='a'&&str1[i]!='e'&&str1[i]!='i'&&str1[i]!='o'&&str1[i]!='u'&&str1[i]!='U'&&str1[i]!='O'&&str1[i]!='I'&&str1[i]!='E'&&str1[i]!='A')
    printf("%c",str1[i]);
    }
    return 0;
}
