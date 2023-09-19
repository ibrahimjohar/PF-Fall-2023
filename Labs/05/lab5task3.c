/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 19 September 2023
 * Description: Create a program that asks for this question if user enters Y or y it prints “Deleted successfully” if the user enters N or n it prints “Delete canceled” otherwise it prints choose the right option using switch statement.
 */

#include <stdio.h>

int main(){
	
	//input char variable
	char l;
	
	//input character from user
	printf("Are you sure to delete? Press [Y/y] or [N/n]\n");
	scanf(" %c" , &l);
	
	//switch statements
	switch (l)
	{
		case 'Y':
			printf("Deleted successfully");
			break;
		case 'y':
			printf("Deleted successfully");
			break;
		case 'N':
			printf("Delete canceled");
			break;
		case 'n':
			printf("Delete canceled");
			break;
		default: 
			printf("Please enter valid character again!");
	}
}//end main ()
