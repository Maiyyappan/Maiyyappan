#include <stdio.h>
#include<conio.h>
void main()
{
    char a[1000];
    int i,j=0,b[1000],max=0,c=0,s=0,t,f,count,k;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!=' ')
          c++;
        else
        {
            b[j]=c;
            j++;
            c=0;
        }
    }
    b[j]=c;
    j++;
for(i=0;i<j;i++)
{
    s++;
        if(max<b[i])
        {
            max=b[i];
            t=s;
            k=i;
        }
}
for(i=0;i<k;i++)
    count+=b[i];
f=count+t;
for(i=f-1;i<f+max;i++)
  printf("%c",a[i]);
  getch();
}
