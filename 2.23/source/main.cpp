#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, c, num;

	printf("�п�J�T�Ӿ�ơA�P�_�̤j�ƻP�̤p��:");
	scanf_s("%d,%d,%d", &a, &b, &c);
	
	if (a > b) {
		if (c > b) {
			num = c;
			c = b;
			b = num;
			if (b > a) {
				num = b;
				b = a;
				a = num;
			}
		}
	}
	else if (a < b) {
		num = a;
		a = b;
		b = num;
		if (c > b) {
			num = c;
			c = b;
			b = num;
			if (b > a) {
				num = b;
				b = a;
				a = num;
			}
		}
	}
	else if (a == b | b == c) {
		if (c > a) {
			num = c;
			c = a;
			a = num;
		}
	}
	else {         //a==c
		if (b > a) {
			num = b;
			b = a;
			a = num;
		}
		else 
		num = c;
		c = b;
		b = num;
	}



	printf("Largest is %d\nSmallest is %d \n", a, c);


	system("pause");
	return 0;
}