#include <stdio.h>

/*print Fahreheit-Celsius table for faht = 0, 20, ..., 300*/

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* Nedre grense til tabellen*/
    upper = 300; /* Øvre grense til tabellen*/
    step = 20; /*økningssteg*/

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}