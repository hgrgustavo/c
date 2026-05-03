#include <stdio.h>

void print_the(unsigned short array[10]) {
	printf("[ ");
	
	for(int j = 0; j < 10; j++) {
		printf("%hu ", array[j]);
	}

	printf("]\n");
}

int main() {
	unsigned short evens_array[10];
	unsigned short odds_array[10];
	unsigned short input;

	for(short i = 0; i < 10; i++) {
		printf("Insert a number: ");
		scanf("%hu", &input);

		if (input % 2 == 0) {
			evens_array[i] = input;
		} else {
			odds_array[i] = input;
		}
	}

	printf("Evens: ");
	print_the(evens_array);

	printf("Odds: ");
	print_the(odds_array);
}
