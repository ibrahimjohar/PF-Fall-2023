/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 19 September 2023
 * Description: Write a C program for Light sensor value ranges from 0-1000, if it's exposed under sunshine (>500), if it's evening then (0 ~ 100), lighting (100 to 500).
 */

#include <stdio.h>

int main(){
	
	//decleration of variable

	int lightVal;

	//input light sensor value
	
	printf("Input light sensor value (range: 0 to 1000): ");
	scanf("%d", &lightVal);
	
	//conditions

	if (lightVal > 500 && lightVal <= 1000)
	{
		printf("Exposed under sunlight. Adjust screen brightness accordingly.");
	}	
	else if (lightVal > 100 && lightVal <= 500)
	{
		printf("Lighting conditions. Adjust screen brightness accordingly.");
	}
	else if (lightVal >= 0 && lightVal <= 100)
	{
		printf("Evening time. Adjust screen brightness accordingly.");
	}
	else 
	{
		printf("Enter a valid light sensor value in the range of 0 to 1000.");
	}//end conditions

}//end main ()
