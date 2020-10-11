#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	printf("*********\n");
	for (i = 0; i < 7; i++) {
		printf("*       *\n");
	}
	printf("*********\n\n");


	printf("   ***\n *     *\n");
	for (i = 0; i < 5; i++) {
		printf("*       *\n");
	}
	printf(" *     *\n   ***\n\n");


	printf("    *\n   ***\n  *****\n");
	for (i = 0; i < 6; i++) {
		printf("    *\n");
	}
	printf("\n");


	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			if (j == 4 - i | j == 4 + i) {
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	for (i = 3; i >= 0; i--) {
		for (j = 0; j < 10; j++) {
			if (j == 4 - i | j == 4 + i) {
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}


	system("pause");
	return 0;
}