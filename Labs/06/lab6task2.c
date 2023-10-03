/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 3 October 2023
 * Description: Write a program that will generate the Fibonacci series up to 10000. Also find the sum of the generated Fibonacci numbers divisible by 3, 5 or 7 only.
 */
 
#include <stdio.h>

int main()
{
	int currentTerm = 1, nextTerm = 1, temp, num, sum = 0;
	printf("%d\n", currentTerm);
	printf("%d\n", nextTerm);
	
	for(currentTerm = 1, nextTerm = 1; nextTerm < 10000;)
	{
		num = currentTerm + nextTerm;
		printf("%d", num);
		printf("\n");
		temp = currentTerm;
		currentTerm = nextTerm;
		nextTerm = num;
		
		if (num % 3 == 0 || num % 5 == 0 || num % 7 == 0 )
		{
			sum = sum + num;
		}
	}
	
	printf("Sum: %d", sum);
	
}//end main() 
