/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 24 October 2023
 * Description: Create a C program that swaps the values of two integers using a user-defined function, swapIntegers. The user inputs two integer values, 
 *              and the program uses the function to swap them. It should perform the swap, and display the updated values.
 */

#include <stdio.h>

void swapIntegers(int *num1, int *num2);//function defintion 

int main()
{
    int num1, num2;//declare number variables

    //input values from user
    printf("Enter Num1: ");
    scanf("%d", &num1);
    printf("Enter Num2: ");
    scanf("%d", &num2);

    swapIntegers(&num1, &num2); //call function by reference

    //print swapped numbers
    printf("Num1: %d\n", num1);
    printf("Num2: %d", num2);
}//end main()

void swapIntegers(int *num1, int *num2)//function to swap numebers
{
    int temp; //temp to store value 
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
