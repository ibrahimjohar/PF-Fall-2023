/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 12 September 2023
 * Description: Write a program that asks DOB of two persons and then prints who is older. 
 */

#include <stdio.h>

int main(){
	
	//declaration and initialisation of variables 
	
	int date1 = 0, date2 = 0, month1 = 0, month2 = 0, year1 = 0, year2 = 0; 
	
	//program welcome statement
 	
	printf("Enter the age of two people and this program will tell you who is older!");
	printf("\n");

	//input of DOB of person 1
	
	printf("Enter the day of birth of Person 1: ");
	scanf("%d" , &date1);
	printf("Enter the month of birth of Person 1: ");
	scanf("%d" , &month1);
	printf("Enter the year of birth of Person 1: ");
	scanf("%d" , &year1);

	//input of DOB of person 2	

	printf("Enter the day of birth of Person 2: ");
	scanf("%d" , &date2);
	printf("Enter the month of birth of Person 2: ");
	scanf("%d" , &month2);
	printf("Enter the year of birth of Person 2: ");
	scanf("%d" , &year2);

	//conditional checking

	if (year1 > year2)
	{
		printf("Person 2 is older than Person 1");
	}
	else if (year2 > year1)
	{
		printf("Person 1 is older than Person 2");	
	}
	else if (month1 > month2)
	{
		printf("Person 2 is older than Person 1");
	}
	else if (month2 > month1)
	{
		printf("Person 1 is older than Person 2");	
	}
	else if (date1 > date2)
	{
		printf("Person 2 is older than Person 1");
	}
	else if (date2 > date1)
	{
		printf("Person 1 is older than Person 2");	
	}
	else 
	{
		printf("Both persons have the same date of birth, hence they are both of the same age!");
	}
	
return 0;
}//endmain()
