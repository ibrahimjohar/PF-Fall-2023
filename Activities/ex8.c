/*Write a program in C to input a string and print it.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char myString[100];

    printf("Enter your name here: ");
    fgets(myString, 100, stdin);

    printf("Your name is: %s", myString);

}
