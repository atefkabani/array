#include <stdio.h>

void scanArray(int * ptr, int len) {
	printf("Please enter %d of array elements \n", len);
	for (int i = 0; i < len; i++) {
		//scanf("%d", (ptr+i));//or
		scanf("%d", &ptr[i]);//or

	}
}

void printArray(int *ptr , int len) {

	printf("Printing Array : \n");
	printf("[");
	for (int i = 0; i < len; i++) {
		printf("%d ",  ptr[i]); //or
		//printf("%d ",  *(ptr+i)); //or

		if (i <len-1) printf(", ");
	}
	printf("]\n\n");
}

void getAverage(int *ptr , int len) {
	printf("Printing Array average : \n");
	int total = 0 ;
	for (int i = 0; i < len; i++) {
		total += ptr[i];
	}
	printf("The average of elements are %.f", (float)total/len);
}

