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

	
	// For testing and later optimization debugging
	
	/*for (int i = 0; i < 50; i++) { //prints the array for fun

                printf("%d ",  array[i]);
        
        }
	*/

	//int *pointer;

	//&pointer = 0x7ffcc874ac88;
        //printf("\naddress of array: %p", &array);
        //free(array);
	
	// End of testing code

        

	return 0;
}

