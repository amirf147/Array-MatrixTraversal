/* 
 * File:                Array.c
 * Author:		Amir Farhadi
 * Description: 	Array
 */

#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

int checkNumberOfElements(){

	//Function that checks how many integers in the file
	
	FILE *filePointer = NULL;

        int readBuffer;

        filePointer = fopen("Array.txt", "r");

	int count = 0;

	while ((fscanf(filePointer, "%d", &readBuffer)) != EOF) { //Goes through each int in file

		count = count + 1;

	}

	fclose(filePointer);
	return count;
}

int greatestSum(int array[]) {

	//Placeholder for the sums
	int sumAdjacentFive[46] = {0,0,0,0,0,0,0,0,0,0,
				   0,0,0,0,0,0,0,0,0,0,
				   0,0,0,0,0,0,0,0,0,0,
				   0,0,0,0,0,0,0,0,0,0,
				   0,0,0,0,0,0};

	int largest;

	for (int i = 0; i < 46; i++) { //Add up all adjacent 5 number combinations
		for (int j = 0; j < 5; j++) {
			sumAdjacentFive[i] = sumAdjacentFive[i] + array[i + j];
		}	
	}
	
	largest = sumAdjacentFive[0];

	for (int i = 0; i < 10; i++) { //get largest of the sums

		if (largest < sumAdjacentFive[i]) {

			largest = sumAdjacentFive[i];
		}
	}
	
	//Debug=
	//printf("The greatest sum of 5 adjacent numbers is: %d\n", largest);
	
	return largest;
}

int *arrayFromFile() {

	int* array;

	array = calloc(50, sizeof(int));
	
	int count; //will be set to number of int in file

        FILE *filePointer = NULL;

        int readBuffer;

        filePointer = fopen("Array.txt", "r");

	count = checkNumberOfElements();

	if (count > 4) {
		
		for (int i = 0; i < count; i++) {
			fscanf(filePointer, "%d", &readBuffer);
			*(array + i) = readBuffer;
		}

	} else if ((count < 5) && (count > 0)) {

		printf("ERROR: Too few integers in the file! Array not created!");

	} else if (count == 0) {

		printf("ERROR: Empty File has been specified! Array not created!");
	}

	fclose(filePointer);
	
	/* TO do later testing and optimization exploration
	printf("\nADDRESS OF ARRAY: %p", &array);
	//free(array);
	printf("\nADDRESS OF ARRAY: %p", &array);
	*/

	//free(array);
	
	return array;

}



