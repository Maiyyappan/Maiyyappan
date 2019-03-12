#include<stdio.h>
void main()
{
    int l,a[100],i,m;
    clrscr();
    scanf("%d %d",&l,&m);
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<l-1;i++)
    {
        if((a[i]-a[i+1]==1)||(a[i]-a[i+1]==-1))
        {
           if(a[i]==m)
           {
               printf("%d ",i+1);
           }
           if(a[i+1]==m)
           {
               printf("%d ",i+2);
               a[i+1]='&';
           }
        }
    }
   
}
