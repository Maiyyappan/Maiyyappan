#include<stdio.h>
void main()
{
    long int l,q[1000],i,j,min,t;
    scanf("%ld",&l);
    for(i=0;i<l;i++)
    {
        scanf("%ld",&q[i]);
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
           
           if(q[i]>q[j])
           {
               t=q[i];
               q[i]=q[j];
               q[j]=t;
           }
        }
    }
        min=q[1]-q[0];
        printf("%ld",min);}
    
    
