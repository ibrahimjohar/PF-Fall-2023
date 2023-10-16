#include <stdio.h>

int main()
{
	int n, row = 0, col = 0; 
	
	printf("Enter number of line you would like your shape to consist of: ");
	scanf("%d", &n);

	while (row <= n)
	{
		row = row + 1;
		col = n;
		while (col >= row)
		{
			printf("*");
			col = col - 1;
		}
		printf("\n");
	}
return 0;
}//end main()