/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 19 September 2023
 * Description: Write a C program to check whether a number is multiple of 3 or not.
 */

#include <stdio.h>

void main(){
	
	//input number
	int num;
	printf("Enter your number: ");
	scanf("%d" , &num);
	
	if (num % 3 == 0) 
	{
		printf("This number is multiple of 3");
	}//if condition
	else
	{
		printf("This number is not a multiple of 3");
	}//else condition
	
}//end main ()
