#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("");
    scanf("%d",&a);
    if((a>=1) && (a<=9)){
        switch (a){
        case 1 : printf("one");break;
        case 2 : printf("two");break;

        case 3 : printf("three");break;

        case 4 : printf("four");break;

        case 5 : printf("five");break;

        case 6 : printf("six");break;
        case 7 : printf("seven");break;

        case 8 : printf("eight");break;

        case 9 : printf("nine");break;
        default : printf("Greater than 9");
        }
        }

        if(a>9){
            printf("Greater than 9");
    }

    return 0;
}

