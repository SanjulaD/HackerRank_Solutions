#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
     int j;
    double dd;
    char str[100],*p,a[100];
    scanf("%d",&j);
    scanf("%lf",&dd);
    scanf(" %[^\n]",str);
    p=strcpy(a,s);
    printf("%d\n",i+j);
    printf("%.1lf\n",d+dd);
    p=strcat(a,str);
    printf("%s\n",p);


    return 0;
