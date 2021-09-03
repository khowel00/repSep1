#include <stdio.h>

#define SIZE 10

void loadArray(int array[], int size);

int main(int argc, char *argv[]) {
	int numbers[SIZE];

	loadArray(numbers, SIZE);
	printf("%d\n", numbers[9]);
	return 0;
}

void loadArray(int array[], int size) {
	int index;

	for(index = 0; index < size; index++) {
		array[index] = index * 100;
	}
}

