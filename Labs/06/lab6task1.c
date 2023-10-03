/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 3 October 2023
 * Description: Write a C Program that takes any number from the user and identifies if the number is a perfect number or not.
 */
 
#include <stdio.h>

int main()
{
	int num, factorCheck, factorSum = 0, i;
	
	printf("Enter number: ");
	scanf("%d", &num);
	
	i = 1;
	
	while (i < num)
	{
		factorCheck = num % i;
		if (factorCheck == 0)
		{
			factorSum = i + factorSum;
		}
		i++;
	}
	
	if (factorSum == num)
	{
		printf("Is a perfect number.");
	}
	if (factorSum != num)
	{
		printf("Is not a perfect number.");
	}
	
}//end main()
