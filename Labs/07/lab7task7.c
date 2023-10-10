/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 10 October 2023
 * Description: Take 2, 2x2 matrices as input in a 2D array. Then, multiply the 2 matrices and print the final output matrix.
 */
 
 #include <stdio.h>
 
 int main()
 {
 	int arr1[2][2];
 	int arr2[2][2];
 	int ans[2][2];
 	
 	for (int i = 0; i<2; i++)
 	{
		for (int j=0; j<2; j++)
		{
			printf("Enter element [%d][%d] of array 1: ", i, j);
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("\n");
	
	for (int i = 0; i<2; i++)
 	{
		for (int j=0; j<2; j++)
		{
			printf("Enter element [%d][%d] of array 2: ", i, j);
			scanf("%d", &arr2[i][j]);
		}
	}
	printf("\n");

	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			ans[i][j] = 0;
			for (int k = 0; k<2; k++)
			{
				ans[i][j] += arr1[i][j] * arr2[i][j]; 
			}
		}
	}
	printf("\n");
	
 	for (int i = 0; i<2; i++)
 	{
		for (int j=0; j<2; j++)
		{
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}
 	
 }//end main()
