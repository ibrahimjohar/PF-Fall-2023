/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 19 September 2023
 * Description: Write a program to see greetings according to time using a 24-hour format.
 */

#include <stdio.h>

void main(){
	
	//input time in 24 hour format
	int hr, mins;
	printf("Enter the hour in 24 hour format: ");
	scanf("%d" , &hr);
	printf("Enter the minutes: ");
	scanf("%d" , &mins);

	if (hr >= 5 && hr <= 11)
	{
		printf("Good Morning!");
	}//if condition for hours between 5 and 11
	if (hr >= 12 && hr <= 18)
	{
		printf("Good Evening!");
	}//if condition for hours between 12 and 18
	if (hr > 18 && hr <= 24)
	{
		printf("Good Night!");
	}//if condition for hours between 18 and 24
	if (hr > 24)
	{
		printf("Please enter valid 24 hour format, hour again!");
	}//if condition for hours above 24

}//end main ()
