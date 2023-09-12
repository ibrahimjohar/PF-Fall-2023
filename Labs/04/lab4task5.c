/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 12 September 2023
 * Description: Write a program that asks user for appropiate inputs and then uses the quadratic formula to return the solutions. 
 */

#include <stdio.h>
#include <math.h>


int main(){
	
	//declaration and initialisation of variables 
	
	int date1 = 0, date2 = 0, month1 = 0, month2 = 0, year1 = 0, year2 = 0, nYears = 0, nMonths = 0, nDays = 0; 
	
	//program welcome statement
 	
	printf("Enter the age of two people and this program will tell you who is older!");
	printf("\n");

	//input of DOB of person 1
	
	printf("Enter the day of birth of person 1: ");
	scanf("%d" , &date1);
	printf("Enter the month of birth of person 1: ");
	scanf("%d" , &month1);
	printf("Enter the year of birth of person 1: ");
	scanf("%d" , &year1);

	//input of DOB of person 2	

	printf("Enter the day of birth of person 2: ");
	scanf("%d" , &date2);
	printf("Enter the month of birth of person 2: ");
	scanf("%d" , &month2);
	printf("Enter the year of birth of person 2: ");
	scanf("%d" , &year2);

	//calculation
	
	nYears = year1 - year2;
	nMonths = month1 - month2;
	nDays = date1 - date2;

	//determining whether person 1 is older or person 2

	if (nYears < 0) 
	{
		printf("Person 1 is a few years older than Person 2");	
	}
	else 
	{
		printf("Person 2 is a few years older than Person 1");
	}  
	if (nYears = 0)
	{
		if (nMonths = 0)
		{
			if (nDays < 0)
			{
				printf("Person 1 is a few days older than Person 2");	
			}
			else
			{
				printf("Person 2 is a few days older than Person 1");
			}
		}  	
		else if (nMonths < 0) 
		{
			printf("Person 1 is a few months older than Person 2");	
		}
		else 
		{
			printf("Person 2 is a few months older than Person 1");
		}
	}
		
return 0;
}//end main()
