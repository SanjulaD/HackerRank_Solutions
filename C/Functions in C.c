#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if((a>b) && (a>c) && (a>d)){
        printf("%d",a);
    }
    else if((b>c) && (b>a) && (b>d)){
        printf("%d",b);
    }
    else if((c>b) && (c>a) && (c>d)){
        printf("%d",c);
    }
    else{
        printf("%d",d);
    }

    return 0;
}

