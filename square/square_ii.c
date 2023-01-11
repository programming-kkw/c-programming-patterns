#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// To print i instead of *, replace the following code by code on line 7
// printf("%d", i);