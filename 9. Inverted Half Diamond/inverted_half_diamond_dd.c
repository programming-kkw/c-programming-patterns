#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 5; i >= 1; i--) {
        for (k = 1; k <= (i - 1); k++) {
            printf(" ");
        }

        for (j = 5; j >= i; j--) {
            printf("*");
        }

        printf("\n");
    }

    for (i = 4; i >= 1; i--) {

        for (k = 5; k > i; k--) {
            printf(" ");
        }

        for (j = i; j >= 1; j--) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}