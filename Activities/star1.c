#include <stdio.h>

int main()
{
	int n, r = 0, c = 0; 
	
	printf("Enter number of line you would like your shape to consist of: ");
	scanf("%d", &n);

	while (r <= n) //rows
	{
		c = r;
		while (c > 0) //columns
		{
				c = c - 1;
				printf("*");
		}
		printf("\n");	
		r = r + 1;
	}
return 0;
}//end main()