/*
Programmer: Ibrahim Johar Farooqi
Date: 27 October 2023
Description: Q2:
			You are tasked with implementing a program to find the largest square submatrix of 1s in a given binary matrix. Write a C program that does the following:
			1. Input a binary matrix (a 2D array of 0s and 1s) from the user. The matrix can be of any size.
			2. Find and display the largest square submatrix of 1s in the input matrix.
			3. Display the dimensions (rows and columns) of the largest square submatrix found.
			4. If there are more than one largest square matrix, then find any one of them.
*/

#include <stdio.h>

int main()
{
	int arr[100][100];
	int r, c;
	printf("Enter R (rows of matrix): ");
	scanf("%d", &r);
	printf("Enter C (columns of matrix): ");
	scanf("%d", &c);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("Enter binary element of matrix[%d][%d]", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	int rCount = 0, cCount = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (arr[i][j] == arr[i][j+1]) 
		}
	}
	
	/*
	int rowCount = 0;
	
	int i = 0;
	int rowFlag = 0;
	for (i = 0; i < n;)
	{
		for (j = 0; j < m; j++)
		{
			if (arr[i][j] == arr[i][j+1])
			{
				rowCount++;
				rowFlag = 1;
			}
			else
			{
				continue;
			}
		}
		if (rowFlag == 0)
		{
			i++;
		}
	}
	int colCount = 0;
	int colFlag = 0;
	int j = 0;
	for (i = 0; i < rowCount; i++)
	{
		
		if (arr[i][j] == arr[i+1][j])
		{
			colCount++;
			colFlag = 1;
		}
		else
		{
			continue;
		}
	}*/
}
