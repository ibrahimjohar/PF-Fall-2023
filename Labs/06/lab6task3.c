/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 3 October 2023
 * Description: Write a C Program to compute the LCM and GCD of two numbers.
 */
 
#include <stdio.h>

int main()
{
	int num1, num2, lcm, gcd, a, b;
	
	printf("Enter Num1: ");
	scanf("%d", &num1);
	printf("Enter Num2: ");
	scanf("%d", &num2);
	a = num1;
	b = num2;
	
	if (num1 != num2)
	{
		if (num1 > num2)
		{
			num1 = num1 - num2;
			gcd = num1;
		}
		else 
		{
			num2 = num2 - num1;
			gcd = num2;
		}
	}
	
	printf("GCD is: %d\n", gcd);
	
	lcm = (a*b) / gcd;
	printf("LCM is: %d", lcm);

}//end main()
