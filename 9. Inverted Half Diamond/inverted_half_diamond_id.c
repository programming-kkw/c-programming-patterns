#include <stdio.h>

int main () {
    int i, j, k;

    for (i = 1; i <= 5; i++) {
        for (k = 1; k <= (5 - i); k++) {
            printf(" ");
        }

        for (j = i; j >= 1; j--) {
            printf("*");
        }

        printf("\n");
    }

    for (i = 1; i <= 4; i++) {

        for (k = 1; k <= i; k++) {
            printf(" ");
        }

        for (j = 4; j >= i; j--) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}