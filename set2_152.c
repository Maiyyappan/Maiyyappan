#include <stdio.h>
#include<conio.h>
void main()
{
    char a[100][100],b[100],b1[100];
    int i,j,n,l,k,m,c=0,s=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
      scanf("%s",a[i]);
     for(i=0;i<n;i++)
    {
        strcpy(b,a[i]);
        strcpy(b1,a[i+1]);
        l=strlen(b);
        m=strlen(b1);
        if(l==m)
        {
            c=0;
        for(j=0;j<l;j++)
        {
            if(b[j]==b1[j])
             c++;
           if(c==l)
         {
            s++;
            if(s==k-1)
             break;           
         }
         else
          s=0;
        }
        }
    }
    if(s==k-1)
      printf("yes");
        else
      printf("no");
}
