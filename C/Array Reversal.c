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

    /* Write the logic to reverse the array. */
     
    for(i = num-1; i >= 0; i--) //just print as reverse
        printf("%d ", *(arr + i));
    return 0;
}