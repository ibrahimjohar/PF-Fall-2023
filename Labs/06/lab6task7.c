/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 3 October 2023
 * Description: Write a C Program that takes a user input array and prints the sum of its elements.
 */

#include <stdio.h>

int main()
{
	int size = 1;
	printf("Size of your array: ");
	scanf("%d", &size);
	
	int array[size];
	
	for (int i = 0, sum = 0; i <= size; i++)
	{
		array[i] = array[i] + 1; 
		if (i == size)
		{
			sum = sum + array[i];
			printf("The sum of the size of your array is: %d", sum);	
		}
	}
}
