    #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",a,i,(a*i));
    }
    return 0;
}



