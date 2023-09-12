/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 12 September 2023
 * Description: Print the pattern for any number of n
 */

#include <stdio.h>

int main(){
	//declaration and initialisation 
	int i = 0, j, n;
	//input n
	printf("Enter number of lines for the pattern (****): ");
	scanf("%d" , &n);
	//store n in a counter, i
	i = n;
	//loop condition
	while (i >= 1)	
	{
		j = 1;
		//outputs * in the same line whenever this loop runs
		while (j <= n)
		{ 
			printf("*");
			j = j + 1;		
		}
		i = i - 1;
		//breaks line once a line has printed exactly *n(s) 
		printf("\n");
	}

return 0;

}//end main()
