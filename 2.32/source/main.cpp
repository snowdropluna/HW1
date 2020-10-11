#include <stdio.h>
#include <stdlib.h>
int main(void) {
	float weight, height;
	float BMI;

	printf("Enter your weight in kilograms and your height in meters : ");
	scanf_s("%f,%f", &weight ,&height);

	printf("your weight is : %2.2f\n",weight);
	printf("your height is : %2.2f\n",height);

	BMI = weight / (height*height);

	if (BMI < 18.5) {
		printf("Your BMI is %2.1f.You are underweight\n",BMI);
	}
	else if (BMI >= 18.5 & BMI <= 24.9) {
		printf("Your BMI is %2.1f.You are normal\n", BMI);
	}
	else if (BMI >= 25 & BMI <= 29.9) {
		printf("Your BMI is %2.1f.You are overweight\n", BMI);
	}
	else if (BMI >= 30) {
		printf("Your BMI is %2.1f.You are obese\n", BMI);
	}


	system("pause");
	return 0;
}