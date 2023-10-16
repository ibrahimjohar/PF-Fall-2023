#include <stdio.h>

/*
*Write a program in C to swap two numbers using a function.
*/

void swap_num(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	int n1, n2;
	
	printf("Enter your num1: ");
	scanf("%d", &n1);
	printf("Enter your num2: ");
	scanf("%d", &n2);

	printf("Before swapping: n1 = %d, n2 = %d ",n1,n2);
	
	swap_num(&n1,&n2);
	
	printf("\nAfter swapping: n1 = %d, n2 = %d \n\n",n1,n2);
}