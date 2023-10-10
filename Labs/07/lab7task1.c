/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 10 October 2023
 * Description: Take Two numbers from user and divide both numbers but do not use the division operator.
 */
 
 #include <stdio.h>
 
 int main()
 {
 	int num1, num2, i;
 	
 	//input numbers
 	printf("Enter first number: ");
 	scanf("%d", &num1);
 	printf("Enter second number: ");
 	scanf("%d", &num2);
 	
 	//for loop for alternative method of division
 	for (i=1; num1>num2; i++)
 	{
	 num1 = num1 - num2;
	}//end for loop
	
	//output the quotient
	printf("%d", i);
	
 }//end main()
