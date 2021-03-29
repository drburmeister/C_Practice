#include<stdio.h>

/* 
Author: Dennis Burmeister
Description: Puts all zeroes in an array to the end of the array
Created Date: 3/12/21
*/


main(int argc, char *argv[] )
{
	int i, n, hold;
	int count = 0;
	int vals[argc - 1];
	//Putting command line integers into integer array
	for (n = 0; n < argc - 1; n++)
	{
		if(atoi(argv[n+1]) == 0)
		{
			vals[argc - 1 - count] = atoi(argv[n+1]);
			count++;
		} 
		else
		{
			vals[n - count] = atoi(argv[n+1]);
		}
	}	
	printf("{ ");
	for (n = 0; n < argc - 1; n++)
	{
		printf("%d ", vals[n]);
	}
	printf("}\n");
	//Calling to method that gets pairs
}
