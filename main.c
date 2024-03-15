#include <stdio.h>
#include "lib/array.h"

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arrayLength;
	printf("Enter Array Size");
	scanf("%d", &arrayLength);

	int array[arrayLength];
	scanArray(array, arrayLength);
	printArray(array, arrayLength);
	getAverage(array, arrayLength);

	return 0;
}

