#include <stdio.h>

/*print Fahreheit-Celsius table for faht = 0, 20, ..., 300*/

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* Nedre grense til tabellen*/
    upper = 300; /* Øvre grense til tabellen*/
    step = 20; /*økningssteg*/

    fahr = lower;
    printf("Fahrenheit til celsius tabell.\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}