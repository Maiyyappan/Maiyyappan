#include <stdio.h>
void main()
{
    int i,j,l,a[20],p=0,q=0,x,y;
    clrscr();
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++)
    {
        if(a[i]%2==0)
        {
            p++;
            x=a[i];   
        }
        else
        {
            q++;
            y=a[i];
        } 
    }
    if(p==1)
        {
             printf("%d",x);
        }
        if(q==1)
        {
             printf("%d",y);
        }
    
}
