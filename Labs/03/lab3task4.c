#include <stdio.h>

int main(){
	float num1 = 0, num2 = 0, ans = 0;
	char oper;
	printf("Enter basic mathematical operation you would like to perform: ");
	scanf(" %c" , &oper);
	printf("Enter your first number: ");
	scanf("%f" ,&num1);
	printf("Enter your second number: ");
	scanf("%f" ,&num2);
	if (oper == '+') {
		ans = num1 + num2;
		printf("The final result is: %f" , ans);
	} else if (oper == '-') {	
		ans = num1 - num2;
		printf("The final result is: %f" , ans);
	} else if (oper == '*') {
		ans = num1 * num2;
		printf("The final result is: %f" , ans);
	} else if (oper == '/') {
		ans = num1 / num2;
		printf("The final result is: %f" , ans);
	} 
	return 1;
}//end main()
