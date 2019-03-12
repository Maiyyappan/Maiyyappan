#include<stdio.h>
void main()
{
    long int l,t,s[100],k,i,j,f=0,rem;
    clrscr();
    scanf("%ld",&l);
    
    k=0;
    while(l)
    {
        rem=l%10;
        s[k]=rem;
        k++;
        l=l/10;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(s[i]==s[j])
            {
                f=1;
                break;
            }
            else
            {
                f=0;
            }
        }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
}   
