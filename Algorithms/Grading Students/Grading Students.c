
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int arr[100],size,i,next;
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
    next = ((arr[i]+4)/5)*5;
    if(arr[i]<38){
        printf("%d",arr[i]);
        printf("\n");
    }
    else if((next-arr[i])<3){
        printf("%d",next);
        printf("\n");
    }
    else{
        printf("%d",arr[i]);
        printf("\n");
    }
    }
}
