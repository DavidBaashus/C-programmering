/*
    "Write a program to count tabs"
*/

#include <stdio.h>

main(){
    double nt, c;

    nt = 0;
    while ((c = getchar()) != EOF)
        if (c == '\t'){
            ++nt;
        }
    printf("%.0f\t", nt);
}