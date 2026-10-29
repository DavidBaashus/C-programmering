#include <stdio.h>

/* Denne tar input fra tastaturet og printer det ut når ENTER presses.
*/

main(){
    int c;

    printf("%d\n", EOF);
    while ((c = getchar()) != EOF)
        putchar(c);
    
}