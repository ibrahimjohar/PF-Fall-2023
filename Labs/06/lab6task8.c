/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 8 October 2023
 * Description: Write a program in C to read n number of values in an array and display it in reverse order.
 */

#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};//declare and initialise 1d array
	
	for (int count=8; count>=0; count--)//start for loop
	{
		printf("%d ", arr[count]);//print individual elements of array in reverse
	}//end for loop
}//end main()
