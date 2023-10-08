/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 8 October 2023
 * Description: Write a C program that produces the following output: 
				0 0 0 0
				
				  1 1
				  
				2 2 2 2
				  
				  3 3
				
				4 4 4 4
			   
          5 5
				  
				6 6 6 6
 */

#include <stdio.h>

int main()
{
	int arr[7][4]; //declare 2d array
	
	int count=0; //declare & initialise count variable
	
	for (count=0; count<7; count++) //for loop 
	{
		if (count%2!=0) //condition to check row number and print accordingly to the pattern
		{
			printf("\t%d\t%d\t%\n\n", count,count);
		}
		else 
		{
			printf("%d\t%d\t%d\t%d\n\n", count,count,count,count);			
		}// end if statement
	}//end for loop
		
}//end main() 
