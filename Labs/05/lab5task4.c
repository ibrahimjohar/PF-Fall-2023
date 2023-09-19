/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 19 September 2023
 * Description: Create a calculator asking for operator (+ or – or * or /) and 2 operands and perform calculation according to the user input using switch statement.
 */

#include <stdio.h>

int main(){
	
	//decleration of variables

	float operand1, operand2, ans;
	char operator;
	
	//welcome prompt
	
	printf("Welcome to your own personalized 2 operand based calculator.\nEnter basic mathematical operators (+ or - or * or /) and see mathematical magic unfold.\n");
	
	//input operands and operator
	
	printf("Enter your first operand: ");
	scanf("%f", &operand1);
	printf("Enter the operation you would like to perform between these two operands: ");
	scanf(" %c", &operator);
	printf("Enter your second operand: ");	
	scanf("%f", &operand2);

	//switch statements
	
	switch (operator)
	{
		case '+':
			ans = operand1 + operand2;
			printf("The result of this operation is: %f" , ans);
			break;
		case '-':
			ans = operand1 - operand2;
			printf("The result of this operation is: %f" , ans);
			break;
		case '*':
			ans = operand1 * operand2;
			printf("The result of this operation is: %f" , ans);
			break;
		case '/':
			if (operand2 == 0)
			{
				printf("This answer yields a math error!\n");
			}
			else 
			{
				ans = operand1 / operand2;
				printf("The result of this operation is: %f" , ans);
			}
			break;
		default: 
			printf("Invalid basic mathematical operator entered!!");	
	}

}//end main ()
