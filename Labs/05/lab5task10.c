/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 19 September 2023
 * Description: Write a program to receive an 8-bit number into a variable and then exchange its higher four bits with the lower four bits if the entered number includes at least two digits.
 */

#include <stdio.h>

int main()
{
	//decleration & initialisation of variables
    int num, leftShift, rightShift, shiftedNum = 0;

	//input 
    printf("Enter a number greater than 9 and lesser than 256: ");
    scanf("%d", &num);

	//condition check
    if (num > 9 && num < 256)
    {
        rightShift = num >> 4; //right shift
        leftShift = num & 0b00001111; //left shift with 00001111

        shiftedNum = rightShift | leftShift; //combine both shifted values with OR operator

		printf("After shifting, the result is %d", shiftedNum); //output 
    }
    else
    {
        printf("Enter a number greater than 9 and lesser than 256 again!"); //invalid input flag
    }

    return 0;

}//end main()
