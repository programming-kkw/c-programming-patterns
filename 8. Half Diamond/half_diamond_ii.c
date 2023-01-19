/* C program – solid half diamond pattern printing using stars */

#include <stdio.h>

int main() {
	int i, j, k;

	for(i = 1; i <= 5; i++) {

		for(j = 1; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}

	for(i = 1; i <= 4; i++) {

		for(j = i; j <= 4; j++) {
				printf("*");
			}

		printf("\n");
	}

    return 0;
}