#include <stdio.h>

/* Denne tar input fra tastaturet og printer det ut når ENTER presses.
*/

main(){
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}