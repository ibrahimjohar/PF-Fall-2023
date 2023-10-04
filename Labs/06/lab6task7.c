/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 3 October 2023
 * Description: Write a C Program that takes a user input array and prints the sum of its elements.
 */

#include <stdio.h>

int main()
{
		int array[9]; //declare array 
		int sum = 0; //declare and initialise sum variable
		
		printf("Enter 9 integers: \n"); //prompt user to enter 9 integers 
		
		for (int count = 1; count <= 9; ++count) //for loop start
		{
			printf("Enter integer %d here: ", count); //prompt user to enter integer(n) here
			scanf("%d", &array[count]); //store integer(n) in array[]
		}//end for loop
	
		for (int count = 1; count <= 9; ++count) //for loop start
		{
			sum = sum + array[count]; //sum the value stored in sum with the individual array integers 
		} //end for loop 
		
		printf("The sum is: %d", sum); //print the sum of the array
		
}//end main()
