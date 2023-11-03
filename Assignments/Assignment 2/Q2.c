/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 25 October 2023
*   Description: Q2:
                You are tasked with implementing a program to find the largest square submatrix of 1s in a given binary matrix.
                Write a C program that does the following:
                1. Input a binary matrix (a 2D array of 0s and 1s) from the user. The matrix can be of any size.
                2. Find and display the largest square submatrix of 1s in the input matrix.
                3. Display the dimensions (rows and columns) of the largest square submatrix found.
                4. If there are more than one largest square matrix, then find any one of them.
*/

#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int arr[100][100];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a binary number in the matrix element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    int maxsize = 0, size = 0, isFound = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 1)
            {
                size = 1;
                isFound = 1;

                while (i + size < r && j + size < c && isFound)
                {
                    for (int l = i; l <= i + size; l++)
                    {
                        if (arr[l][j + size] == 0)
                        {
                            isFound = 0;
                            break;
                        }
                    }
                    for (int l = j; l <= j + size; l++)
                    {
                        if (arr[i + size][l] == 0)
                        {
                            isFound = 0;
                            break;
                        }
                    }
                    if (isFound == 1)
                    {
                        size++;
                    }
                }

                if (size > maxsize) {
                    maxsize = size;
                }
            }
        }
    }

    if (maxsize == 0)
    {
        printf("no dimensions found!");
    } 
    else
    {
        printf("\nSubmatrix: \n");
        for (int i = 0; i < maxsize; i++)
        {
            for (int j = 0; j < maxsize; j++)
            {
                printf("1  ");
            }
            printf("\n");
        }
        printf("\nThe largest submatrix of the matrix is of %d by %d", maxsize, maxsize);
    }
    return 0;
}
