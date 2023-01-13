#include <stdio.h>

int main() {
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 5; j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// To print i instead of *, replace the following code by code on line 7
// printf("%d", i);

// To print j instead of *, replace the following code by code on line 7
// printf("%d", j);