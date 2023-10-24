/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 24 October 2023
 * Description: Your task is to create a C program that performs password length validation and user authentication based on the given requirements below"
 *              a) Prompts the user to enter a password.
                b) Validates the entered password by checking if it is at least 8 characters long.
                c) If the password meets the length requirement, the program should compare it to a stored password "Secure123."
                d) If the entered password matches the stored password, display "Login successful. Welcome!" Otherwise, display "Login failed. Incorrect password."
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char pass[25];
    char stored[] = "Secure123.";
    printf("Enter password: ");
    gets(pass); 

    if (strlen(pass)>=8)
    {
        if (strcmp(pass, stored) == 0)
        {
            printf("Login Successful. Welcome!");
        }
        else
        {
            printf("Login failed. Incorrect password");
        }
    }
    else
    {
        printf("Password length should be atleast 8 characters.");
    }

}
