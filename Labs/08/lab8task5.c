/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 24 October 2023
 * Description: In this C program, you are tasked with creating a function called decideCarUsage that helps users decide whether they should use their car
                on a particular day of the week. Users provide the numeric part of their car's number and the day of the week (1 to 7). 
                The program applies a simple rule: even-numbered cars should be used on even days, and odd-numbered cars on odd days. 
                The function returns 1 if the car should be used and 0 if it should not.
*/

#include <stdio.h>

int decideCarUsage(int numeric, int dayNum);//function defition of decideCarUsage

int main()
{
    int numeric, dayNum;//declare user input variables

    //input from user the numeric part
    printf("Enter numeric part of car: ");
    scanf("%d", &numeric);
    //input from user day number
    printf("Enter day of the week (1-7): ");
    scanf("%d", &dayNum);

    if (decideCarUsage(numeric, dayNum) == 1)//check if decideCarUsage returns 1
    {
        printf("The car can be used.");//print message
    }
    else
    {
        printf("The car cannot be used.");//print message
    }//end if statement
}//end main()

int decideCarUsage(int numeric, int dayNum)//function to determine if car can be used on a specific day
{
    if ((numeric % 2 == 0) && (dayNum % 2 == 0))//check if numeric part and number of day is even
    {
        return 1;
    }
    else if ((numeric % 2 != 0) && (dayNum % 2 != 0))//check if numeric part and number of day is odd
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}//end decideCarUsage
