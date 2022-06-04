#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
    int i,j,andMax=0,orMax=0,xOrMax=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if (j>i) {
                if((i&j)<k&& (i&j)>andMax)
                    andMax=(i&j);
                if((i|j)<k&& (i|j)>orMax)
                    orMax=(i|j);
                if((i^j)<k&& (i^j)>xOrMax)
                    xOrMax=(i^j);
            }
        }
    }
    printf("%d\n",andMax);
    printf("%d\n",orMax);
    printf("%d\n",xOrMax);
 
    return 0;
}