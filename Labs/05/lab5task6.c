/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 19 September 2023
 * Description: Write a C program to receive an 8-bit number into a variable and then check if its 4th and 7th bits are on. If these bits are found to be on, then put them off.
 */

#include <stdio.h>

int main(){
	
	//decleration of variables

	int num, ans, bitCheck;
	
	//input 8 bit denary number

	printf("Enter your 8 bit number here in the denary form (less than 256): ");
	scanf("%d", &num);
	
	//checking if bit 4 and bit 7 are on or not
	
	bitCheck = num & 0b01001000;
	
	//turning bit 4 and bit 7 off
	
	if (bitCheck == 72)
	{
		ans = num ^ 0b01001000;
	}
	else
	{
		ans = num;
	}

	//output 

	printf("The updated or unchanged 8 bit number in integer form is: %d" , ans);

}//end main ()
