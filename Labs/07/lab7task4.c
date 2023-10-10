/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 10 October 2023
 * Description: Take a 2D array(Matrix) as input from user and check that array is symmetric or not. If array is
				symmetric then print “Array is Symmetric” with array if not, then print “array is not symmetric” with
				given array.
				Note: A symmetric matrix is a matrix that is equal to its transpose. Where elements in first row are
				equal to elements in first column and so on.
				Formal Definition: Aij = Aji.
 */
 
 #include <stdio.h>
 
 int main()
 {
 	int n, i, j, isSame;
 	printf("Enter size square matrix(n): ");
 	scanf("%d", &n);
 	
 	int arr[n][n];
 	
 	for (i = 0; i<n; i++)
 	{
		for (j=0; j<n; j++)
		{
			printf("Enter element of array[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\n");
	
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (arr[i][j]==arr[j][i])
			{
				isSame=1;
			}
			else
			{
				isSame=0;
			}
		}
	}
	
	if(isSame==1)
	{
		printf("Array is Symmetric.");
	}
	else
	{
		printf("Array is not Symmetric.");
	}
	
 }//end main()
