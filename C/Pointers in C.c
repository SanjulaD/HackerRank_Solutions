#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d \n",(a+b));
    if(a<b){
        printf("%d\n",(b-a));
    }
    else
        printf("%d",(a-b));
    return 0;
}
