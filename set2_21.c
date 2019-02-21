#include <stdio.h>

int main()
{
    int a,a1,b,b1,c,c1,i;
    scanf("%d %d",&a,&a1);
    scanf("%d %d",&b,&b1); 
    scanf("%d %d",&c,&c1);
    if((a==b&&b==c&&c==a)||(a1==b1&&b1==c1&&c1==a1))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
