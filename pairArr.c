#include<stdio.h>

/* 
Author: Dennis Burmeister
Description: Priogram that takes in integers from the user in command line
* and a sum value that returns the pairs of sums of 2 numbers from the
* command line that equal the inputted sum value.
Created Date: 3/12/21
*/
main(int argc, char *argv[] )
{
	int n;
	
	//Getting desired sum value from user
	printf("Enter a sum value to look for: ");
	int sum = 0;
	scanf("%d", &sum);
	
	//Initializing integer array and size with size of args from command line
	int vals[argc - 1];
	int size = argc - 1;
	
	//Putting command line integers into integer array
	for (n = 0; n < argc - 1; n++)
	{
		vals[n] = atoi(argv[n+1]);
	}
	//Calling to method that gets pairs
	pair(vals, sum, size);
}

pair(int arr[], int sum, int size)
{
	//Initialization
	int i, j;
	
	//Nested for loop that goes through array
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j <  size; j++)
		{
			//Pair check with user sum
			if (arr[i] + arr[j] == sum){
				printf("Pair found at index %d and %d (%d + %d) \r\n", i, j, arr[i], arr[j]);
			}
		}
	}
}