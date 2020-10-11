#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float drive, cost, aver, parks, tolls;
	float total;
	printf("Enter total miles driven per day : ");
	scanf_s("%f", &drive);
	printf("\nEnter cost per gallon of gasoline : ");
	scanf_s("%f", &cost);
	printf("\nEnter average miles per gallon : ");
	scanf_s("%f", &aver);
	printf("\nEnter parking fees per day : ");
	scanf_s("%f", &parks);
	printf("\nEnter tolls per day: ");
	scanf_s("%f", &tolls);

	total = (drive / aver * cost) + parks + tolls;

	printf("\nYou cost %5.2f per dayof driving to work\n", total);





	system("pause");
	return 0;
}