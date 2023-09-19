/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 19 September 2023
 * Description: Write a C program to input a character from the user and check whether the given character is a small alphabet, capital alphabet, digit or special character, using if else.
 */

#include <stdio.h>

int main(){
	
	//decleration of variables

	char myChar;
	int intAscii;
	
	//input of character

	printf("Enter your character: ");
	scanf(" %c", &myChar);
	
	//store ascii value of character in new variable 

	intAscii = myChar;
	
	//if statements to determine which type of character is entered 

	if (intAscii >= 65 && intAscii <= 90)
	{
		printf("This character is a capital alphabet.");
	}
	else if (intAscii >= 97 && intAscii <= 122)
	{
		printf("This character is a small alphabet.");
	}
	else if (intAscii >= 48 && intAscii <= 57)
	{
		printf("This character is a digit.");
	}
	else
	{
		printf("This character is a special character.");
	}

}//end main ()
