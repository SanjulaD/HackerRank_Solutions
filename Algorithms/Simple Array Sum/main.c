#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a[1000],i,sum=0,size;
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
        sum +=a[i];
    }
    printf("%d ",sum);

    return 0;
}

