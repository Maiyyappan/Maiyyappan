#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int size,temp;
    size=num;
    /* Write the logic to reverse the array. */
    for(i=0;i<num/2;i++)
    {   
         temp = *(arr +i);
        *(arr+i) = *(arr + (size-1));
        *(arr + (size -1))=temp;
        size--;
      
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
