#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    
    int len=n*2-1, min;
  	// Complete the code to print the pattern.
      for(int i=0;i<len;i++){
          for(int j=0;j<len;j++){
            min= i<j? i:j;
            min= min<len- i? min: len-i-1;
            min= min<len-j-1? min:len-j-1; 
            printf("%d ",n-min);
          }
         
          printf("\n");
      }
    return 0;
}


//logic
//  int i,j,n=5,len=n*2-1,min;
//     i=2,j=2;
//     min= i<j? i:j;
//     min= min<len- i? min: len-i-1;
//     min= min<len-j-1? min:len-j-1;           
// printf("%d\n",min);
// printf("%d",n-min);