/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 3 October 2023
 * Description: Write a program for a match-stick game between the computer and a user. Your program should ensure that the computer always wins.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int userIN; //decleration of user input variable
	
	for (int nSticks = 21; nSticks > 0;) //for loop to run until the number of sticks are zero.
	{
		printf("Enter the number of sticks you would like to pick. Pick either 1 or 2 or 3 or 4: "); //input prompt with guide of what values to be entered
		scanf("%d", &userIN);
		
		switch (userIN) //switch case to determine how many sticks to remove from the total number of sticks
		{
			case 1:
				nSticks = nSticks - 1;
				break;
			case 2:
				nSticks = nSticks - 2;
				break;
			case 3:
				nSticks = nSticks - 3;
				break;
			case 4:
				nSticks = nSticks - 4;
				break;
			default: 
				printf("enter number of sticks between 1 - 4 in your next turn\ncomputer will now pick! \n");
				break;
		} //end switch case 
		
		//selecting random number of sticks between 1 and 4, using rand() function
		
		int lower = 1, upper = 4;
		srand(time(0));
		int num = (rand() % (upper - lower + 1)) + lower;

		//output the integer the computer randomnly chose
		
        printf("computer picked (%d) sticks\n", num);
		
		//calculate number of sticks left after computer chose a random number of sticks
		
		nSticks = nSticks - num;
		
		//output current number of sticks 
		
		printf("number of Sticks remaining are %d\n", nSticks);
		
		//output winner of the game, which is the computer
		
		if (nSticks <= 0)
		{
			printf("The computer is the winner! Better luck next time!");
		}// end of "if" condition
	}// end of for loop
	
	return 0;
}//end main()
