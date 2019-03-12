    
#include <stdio.h>
void main()
{
    int a[100],i,j,m,l=0;
    clrscr();
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {   
        for(j=i+1;j<m;j++)
        {
            if(a[i]<a[j])
            {
                l++;
            
            }
        }
    }
   printf("%d",l);
    
}
