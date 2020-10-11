#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	printf("Enter  two integers,I will tell you\n");
	printf("whether the first is a multiple of the second:");
	scanf_s("%d,%d", &a, &b);

	if (a%b == 0) {
		printf("%d is a multiple of %d\n", a, b);
	}
	else
		printf("%d is not a multiple of %d\n", a, b);


	system("pause");
	return 0;
}