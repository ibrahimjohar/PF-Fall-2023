#include <stdio.h>

/*
 *Write a program in C to show the simple structure of a function.
 */

float sum(float, float);

int main()
{
	float a, b, total;
	
	printf("Enter a: ");
	scanf("%f", &a);
	printf("Enter b: ");
	scanf("%f", &b);
	
	total = sum(a, b);	
	printf("The sum is: %.1f", total);
}

float sum(float a, float b)
{
	float ans;
	ans = a + b;
	return ans;
}