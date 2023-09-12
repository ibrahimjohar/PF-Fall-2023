/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 12 September 2023
 * Description: Write a program that asks user for a number n, then asks for n more integers and prints the sum of their squares.
 */

#include <stdio.h>
#include <math.h>

int main(){
	// deceleration and initialisation 
	int i = 0, j = 0, sum = 0, numInput, n;
	//input number of inputs to be taken
	printf("Enter number of inputs: ");
	scanf("%d" , &numInput);
	// loop condition
	i = 0;
	while (i < numInput)
	{
		//input n
		printf("Enter n: ");
		scanf("%d" , &n);
		i = i + 1;
		//square of input n stored in j
		j = n;
		j = pow(j, 2); 
		//add sum with the square of j
		sum = sum + j;
	}
	//output the final sum
	printf("The sum is: %d", sum);
return 0;

}//end main()
