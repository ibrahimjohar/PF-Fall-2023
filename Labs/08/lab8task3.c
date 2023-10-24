/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 24 October 2023
 * Description: You are working on a text processing program. Create a C program that reads a text input from the user and searches for a specific character (e.g., 'a') 
 *              within the text using the strchr function. Display the total count of occurrences of the character in the input text.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000];//declare character array for string
    char letter;//declaration of variable to search against

    //input sentence from user
    printf("Enter your sentence: ");
    fgets(arr, sizeof(arr), stdin);
    //input character to search
    printf("Enter the character you would like to search (case sensitive): ");
    scanf("%c", &letter);

    int count;//declaration of variable to store times of occurence of the character

    for (int i = 0; arr[i] != '\0'; i++)//loop through the string up until the null character
    {
        if (arr[i] == letter)
        {
            count++; //if letter is found in the string, increment the count
        }
    }

    //output the occurences of the character in the sentence 
    printf("Number of occurences of %c in your sentence were: %d", letter, count);

}//end main()
