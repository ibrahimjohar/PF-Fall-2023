/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 12 September 2023
 * Description: Write a program that asks user for appropiate inputs and then uses the quadratic formula to return the solutions. 
 */

#include <stdio.h>
#include <math.h>

int main(){
	
	//declaration and initialisation of variables 
	
	float a = 0, b = 0, c = 0, sol1 = 0, sol2 = 0;

	//program welcome statement
 
	printf("Solve your quadratic equations here!");
	printf("\n");

	//input of variables taken from the user

	printf("Enter the coefficient of x^2: "); 
	scanf("%f" , &a);
	printf("Enter the coefficient of x: "); 
	scanf("%f" , &b);
	printf("Enter the constant: "); 
	scanf("%f" , &c);

	//calculation of the two solutions of the quadratic equation using the quadratic formula

	sol1 = (- b + sqrt(b * b - 4 * a * c)) / (2 * a);
	sol2 = (- b - sqrt(b * b - 4 * a * c)) / (2 * a);

	//output of the two solutions of the quadratic equation

	printf("Your first solution of the equation is: %f" , sol1);
	printf("\n");
	printf("Your second solution of the equation is: %f" , sol2);

return 0;
}//end main()
