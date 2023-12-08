/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 5 December 2023
*   Description: Question 1
*                Write a C program that takes a matrix from a file and filename is given as command line argument (use argc and argv).
*                The dimensions can be (2x2, 4x4, and 8x8). Make sure that your program tackles any of the dimensions.
*                Your program should compute the max value from each 2 x 2 submatrix and save it into a new matrix.
*/

#include <stdio.h>
#include <stdlib.h>

//function prototypes
void readmatrixfile(FILE *fp, int mat[][8]);
void eightbyeight(int matrix[][8]);
void fourbyfour(int matrix[][8]);
void twobytwo(int matrix[][8]);
void printmatrix(int matrix[][8], int size);

int main(int argc, char *argv[]) //use of argc & argv
{
    printf("Programmer: Ibrahim Johar Farooqi\nStudent ID: 23K-0074\n\n");

    //declaring variable for size of matrix
    int size;
    //declaring matrix to read matrix from file
    int mat[8][8];
    //initializing size from command line 
    size = atoi(argv[1]);
    //initializing file pointer from command line
    FILE *fp = fopen(argv[2], "r");
    //check for successful file opening
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    else
    {
        readmatrixfile(fp, mat); //call function to read matrix from file
        switch (size)
        {
        case 8:
            printmatrix(mat, size); //call function to print original 'size' matrix
            eightbyeight(mat); //call function to process 8x8 matrix's submatrix
            break;
        case 4:
            printmatrix(mat, size); //call function to print original 'size' matrix
            fourbyfour(mat); //call function to process 4x4 matrix's submatrix
            break;
        case 2:
            printmatrix(mat, size); //call function to print original 'size' matrix
            twobytwo(mat); //call function to process 2x2 matrix's submatrix
            break;
        default:
            printf("Enter a valid size of (2 or 4 or 8)!\n"); //invalid size input message
            break;
        }
    }

    return 0;
} //end main()

//function definition for processing a 2x2 matrix
void twobytwo(int matrix[][8])
{
    int maxVal;
    maxVal = matrix[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (matrix[i][j] > maxVal)
            {
                maxVal = matrix[i][j];
            }
        }
    }

    printf("Submatrix with maximum value: %d", maxVal);
}//end function twobytwo

//function definition for processing a 4x4 matrix
void fourbyfour(int matrix[][8])
{
    int finalmatrix[2][2]; //array declared to store highest values from 2x2 submatrices
    int maxVal;

    for (int i = 0; i < 4; i += 2)
    {
        for (int j = 0; j < 4; j +=2)
        {
            maxVal = matrix[i][j];
            for (int k = i; k < i + 2; k++)
            {
                for (int l = j; l < j + 2; l++)
                {
                    if (matrix[k][l] > maxVal) //determine the highest value among the 2x2 submatrix
                    {
                        maxVal = matrix[k][l];
                    }
                }
            }
            finalmatrix[i/2][j/2] = maxVal; //store the highest value in final matrix
        }
    }

    printf("Submatrix with maximum values: \n");
    //print final matrix with highest values
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", finalmatrix[i][j]);
        }
        printf("\n");
    }
}//end function fourbyfour

//function definition for processing a 8x8 matrix
void eightbyeight(int matrix[][8])
{
    int finalmatrix[4][4]; //array declared to store highest values from 2x2 submatrices
    int maxVal;

    for (int i = 0; i < 8; i += 2)
    {
        for (int j = 0; j < 8; j += 2)
        {
            maxVal = matrix[i][j];
            for (int k = i; k < i + 2; k++)
            {
                for (int l = j; l < j + 2; l++)
                {
                    if (matrix[k][l] > maxVal) //determine the highest value among the 2x2 submatrix
                    {
                        maxVal = matrix[k][l];
                    }
                }
            }
            finalmatrix[i/2][j/2] = maxVal; //store the highest value in final matrix
        }
    }

    printf("Submatrix with maximum values: \n");
    //print final matrix with highest values
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", finalmatrix[i][j]);
        }
        printf("\n");
    }
}//end function eightbyeight

//function definition to read matrix from file
void readmatrixfile(FILE *fp, int mat[][8])
{
    int row = 0;
    //check for end of file
    while (!feof(fp))
    {
        if (feof(fp))
        {
            printf("Error reading file.\n");
        }

        for (int j = 0; j < 8; j++)
        {
            if (fscanf(fp, "%d", &mat[row][j]) == EOF) //store individual integers from file into the 2d array whilst checking for EOF
            {
                break;
            }
        }

        row++;
        if (row == 8) //check if row size does not exceed 8 rows
        {
            break;
        }
    }

    fclose(fp); //close the file
}//end function readmatrixfile

//function definition to print matrices
void printmatrix(int matrix[][8], int size)
{
    printf("Matrix of %dx%d\n", size, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}//end function printmatrix
