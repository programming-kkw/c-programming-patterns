#include <stdio.h>

int main () {
    int i, j, k;

    for (i = 5; i >= 1; i--) {
        for (k = 1; k < i; k++) {
            printf(" ");
        }

        for (j = 10; j >=(2*i); j--) {
            printf("*");
        }

        printf("\n");
    }
    for (i = 4; i >= 1; i--) {
        for (k = 5; k > i; k--) {
            printf(" ");
        }

        for (j = 2*i; j >1; j--) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}