/* C program – solid half diamond pattern printing using stars */

#include <stdio.h>

int main() {
	int i, j, k;

	for(i = 1; i <= 5; i++) {

		for(j = 1; j <= i; j++) {
			printf("%d", j);
		}

		printf("\n");
	}

	for(i = 4; i >= 1; i--) {

		for(j = 1; j <= i; j++) {
				printf("%d", j);
			}

		printf("\n");
	}

    return 0;
}