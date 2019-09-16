#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double meal_cost;
    int tip_percent;
    int tax_percent;

    // read in input
    scanf("%lf", &meal_cost);
    scanf("%d", &tip_percent);
    scanf("%d", &tax_percent);

    // do calculations
    double tip = meal_cost * ((double)tip_percent / 100);
    double tax = meal_cost * ((double)tax_percent / 100);

    // total = round(meal_cost + tip + tax)
    int total = round(meal_cost + tax + tip);

    printf("%d", total);

    return 0;
}



