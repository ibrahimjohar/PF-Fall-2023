/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 19 September 2023
 * Description: Write a C program to find all roots of a quadratic equation, it is required to take user input for a, b and c values. Find discriminant using formula, discriminant = b × b -(4×a×c). Compute roots based on the nature of discriminant.
 */

#include <stdio.h>
#include <math.h>

int main(){
	
	//decleration of variable

	float a, b, c, sol1, sol2, det;
	
	//input of a, b and c	
	
	printf("Enter the coefficient of x^2: ");
	scanf("%f", &a);
	printf("Enter the coefficient of x: ");
	scanf("%f", &b);
	printf("Enter the constant: ");
	scanf("%f", &c);

	//calculation of determinant

	det = b * b - (4 * a * c);
	
	//conditions & solutions' calculation
	
	if (det > 0)
	{
		sol1= (- b + sqrt(b * b - 4 * a * c)) / (2 * a);
		sol2= (- b - sqrt(b * b - 4 * a * c)) / (2 * a);
		
		//output the worked out solution

		printf("The first solution to this quadratic equation is: %f", sol1);
		printf("\n");
		printf("The second solution to this quadratic equation is: %f", sol2);
	}
	else
	{
		printf("Determinant is negative, hence the solutions of the quadratic equation is not real.");
	}//end conditions

}//end main ()
