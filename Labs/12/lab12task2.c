/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 28 November 2023
*   Description: Make 2 separate blank word files with text, "This is a test.".
                 Open them in a C program as a binary file and compare the contents. Are the 2 files equal?
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024
	
int compare(const char *file1, const char *file2); //function prototype

int main()
{
    const char *file1 = "doc1.docx";
    const char *file2 = "doc2.docx";

    // Compare the contents of the files
    if (compare(file1, file2))
    {
        printf("Both files are equal.\n");
    } else {
        printf("Both files are not equal.\n");
    }

    return 0;
} //end main()

int compare(const char *file1, const char *file2) //function definition
{
    FILE *f1 = fopen(file1, "rb");
    FILE *f2 = fopen(file2, "rb");

    if (f1 == NULL || f2 == NULL) //check for error
    {
        perror("Error opening files for comparison");
        exit(EXIT_FAILURE);
    }

    unsigned char buffer1[BUFFER_SIZE];
    unsigned char buffer2[BUFFER_SIZE];
    size_t bytesRead1, bytesRead2;

    do{
        bytesRead1 = fread(buffer1, 1, sizeof(buffer1), f1);
        bytesRead2 = fread(buffer2, 1, sizeof(buffer2), f2);

        if (bytesRead1 != bytesRead2 || memcmp(buffer1, buffer2, bytesRead1) != 0)
        {
            fclose(f1);
            fclose(f2);
            return 0; 
        }
    } while (bytesRead1 > 0);

    fclose(f1);
    fclose(f2);

    return 1;
}//end function
