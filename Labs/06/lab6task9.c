/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 8 October 2023
 * Description: Write a C Program to find the minimum and maximum number in an array.
 */
#include <stdio.h>

int main()
{
	int arr[]={4,1,6,8,10,21,8,9,2,6}; //declare and initialise array 
	int maxNum=0, minNum = arr[0];// declare and initialise maximum & minimum number variables
	
	for (int count=0; count<10; count++)//start for loop for finding maximum  number
	{
		if (arr[count]>maxNum)//if statement for checking max number
		{
			maxNum = arr[count];
		}
		else 
		{
			continue;
		}//end if statement
	}//end for loop
	
	for (int count=1; count<9; count++)//start for loop for finding minimum  number
	{
		if (arr[count]<minNum)//if statement for checking min number
		{
			minNum = arr[count];
		}
		else
		{
			break;
		}//end if statement
	}//end for loop 
	
	//print outputs
	printf("Max Num: %d\n", maxNum);
	printf("Min Num: %d", minNum);

}//end main()
