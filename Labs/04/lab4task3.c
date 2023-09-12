/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 12 September 2023
 * Description: Write a program that asks user for a number n, then asks for n more integers and prints the sum of their squares.
 */

#include <stdio.h>
#include <math.h>

int main(){
	int i = 0, j = 0, sum = 0, numInput, n;
	printf("Enter number of inputs: ");
	scanf("%d" , &numInput);
	i = 0;
	while (i < numInput)
	{
		printf("Enter n: ");
		scanf("%d" , &n);
		i = i + 1;
		j = n;
		j = pow(j, 2); 
		sum = sum + j;
	}
	
	printf("The sum is: %d", sum);
return 0;

}//end main()
