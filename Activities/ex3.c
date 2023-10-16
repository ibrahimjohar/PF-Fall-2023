#include <stdio.h>

/*
*Write a program in C to find the square of any number using the function.
*/

float square_num(float);

int main()
{
	float x, ans;
	printf("Enter your number: ");
	scanf("%f", &x);
	
	ans = square_num(x);
	printf("The square of your number is: %.2f", ans);
}

float square_num(float num)
{
	float sq;
	sq = num * num;
	return sq;
}