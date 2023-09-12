/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 12 September 2023
 * Description: Print the pattern for any number of n
 */

#include <stdio.h>

int main(){
	int i = 0, j, n;
	printf("Enter number of lines for the pattern (****): ");
	scanf("%d" , &n);
	i = n;
	while (i >= 1)	
	{
		j = 1;
		while (j <= n)
		{
			printf("*");
			j = j + 1;		
		}
		i = i - 1;
		printf("\n");
	}

return 0;

}//end main()
