#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int xd,yd;
    float xf,yf;
    scanf("%d %d",&xd,&yd);
    scanf("%f %f",&xf,&yf);
    printf("%d %d\n",xd+yd,xd-yd);
    printf("%0.1f %0.1f",xf+yf,xf-yf);
	
    return 0;
}