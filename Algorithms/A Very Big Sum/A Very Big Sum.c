#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a[10000],i,size,sum=0;
    scanf("%lld",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%lld ",sum);
    return 0;
}

