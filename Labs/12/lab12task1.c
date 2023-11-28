/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 28 November 2023
*   Description: Read any CSV file and print total number of rows and columns before displaying its data in a tabular form using , \t and '|'.
                 Assume that first line is the header and when displaying it, it must be followed by a blank line before displaying the data.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr = fopen("lab12task1file.csv", "r");

    if (fptr == NULL)
    {
        printf("Error opening file");
        exit(0);
    }

    int row = 0;
    int col = 0;
    char c;

    while ((c = fgetc(fptr)) != '\n')
    {
        if (c == ',')
        {
            col++;
        }
    }

    rewind(fptr);

    char head[256];
    char data[256][col+1][256];

    fgets(head, sizeof(head), fptr);
    printf("%s\n\n", head);

    while (fscanf(fptr, "%[^,\n]%*c", data[row][0]) != EOF)
    {
        for (int j = 1; j <= col; j++)
        {
            fscanf(fptr, "%[^,\n]%*c", data[row][j]);
        }
        row++;
        if (row >= 256)
        {
            break;
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= col; j++) {
            printf("%s", data[i][j]);

            if (j < col) {
                printf(" | ");
            }
        }
        printf("\n");
    }

    printf("\nThe total number of rows: %d\n", row);
    printf("The total number of columns: %d\n", col + 1);

    fclose(fptr);
}
