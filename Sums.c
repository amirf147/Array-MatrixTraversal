/* 
 * File:                Exercise7.c
 * Author: 		Amir Farhadi
 * Description: 	Dynamic Memory Allocation
 */

#include <stdio.h>
#include <stdlib.h>
#include "Array.h"
#include "Matrix.h"

int main () {

	int greatestSumAdjacentFive, greatestSum5array;

	int *array;

        array = arrayFromFile();


	greatestSum5array = greatestSum(array);

        greatestSumAdjacentFive = matrix();



        printf("\nThe greatest sum of 5 adjacent numbers in the matrix is: %d\n",
        		greatestSumAdjacentFive);

	printf("\nThe greatest sum of 5 adjacent numbers in the array is: %d\n",
		       greatestSum5array);	


	return 0;
}

