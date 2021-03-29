#include<stdio.h>

/* 
Author: Dennis Burmeister
Description: Gets the max sum subarray
* Subarray can get go from end of whole array to its beginning
Created Date: 3/16/21
*/

main(int argc, char *argv[])
{
	//size of array A
	int size = argc - 1;
	//initializing for loop vars
	int n, i, j, k;
	//initializing index holders
	int high, low = 0;
	//counter used to copy the array
	int count = 1;
	//A array is double the size of the # of args
	int A[2*size];
	//initializing vars
	int sum = 0;
	int hold = 0;
	
	//Loop that fills the A array
	for(n= 0; n <2*size; n++)
	{
		//When to reset the counter so the first element is added to the A[size] to A[2*size] locations
		if (n == size)
		{
			count = 1;
		}
		///Adds elements to the array
		A[n] = atoi(argv[count]);
		count++;
	}

	//Nested for loop that finds the Max Subarray
	for (i = 0; i <2*size-1; i++)
	{
		//Reset hold var
		hold = A[i];
		for(j = i+1; j < 2*size; j++)
		{
			hold += A[j];
			//Tests current subarray sum to max subarray sum
			if(hold > sum)
			{
				//setting new max sum and indexes
				sum = hold;
				low = i;
				high = j;
			}
		}
	}
	//Print max subarray and max sum
	printf("{ ");
	for(k = low; k <= high; k++){
		if(k < high) printf("%d, ", A[k]);
		else printf("%d ", A[k]);
	}
	printf(" } \nMax Sum = %d\n", sum);
}
