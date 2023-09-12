/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 12 September 2023
 * Description: Print the pattern for any number of n.
 */

#include <stdio.h>

int main(){
	int i = 0, j = 0, n;
	printf("Enter number of lines for the pattern: ");
	scanf("%d" , &n);
	while (i <= n)	
	{
		i = i + 1;
		j = i;
		while (j > 0)
		{
			j = j - 1;
			printf("*");
		}
		printf("\n");
	}
return 0;

}//end main()
