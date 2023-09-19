/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 19 September 2023
 * Description: Write a C program to receive an 8-bit number into a variable and then check if its 4th and 7th bits are on. If these bits are found to be on, then put them off.
 */

#include <stdio.h>

int main(){
	
	//decleration of variables

	int bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8;
	
	//input individuals bits of an 8 bit number

	printf("Enter bit 1: ");
	scanf("%d", &bit1);
	printf("Enter bit 2: ");
	scanf("%d", &bit2);
	printf("Enter bit 3: ");
	scanf("%d", &bit3);
	printf("Enter bit 4: ");
	scanf("%d", &bit4);
	printf("Enter bit 5: ");
	scanf("%d", &bit5);
	printf("Enter bit 6: ");
	scanf("%d", &bit6);
	printf("Enter bit 7: ");
	scanf("%d", &bit7);
	printf("Enter bit 8: ");
	scanf("%d", &bit8);
	
	//turning off the 4th and 7th bit (if they are on) condition

	if (bit4 == 1 && bit7 == 1)
	{
		bit4 = 0;
		bit7 = 0;
		printf("Bit4 and Bit 7 have now been turned off.\n");
	}
	
	//output the updated or unchanged 8 bit number

	printf("8-bit number: %d", bit1);
	printf("%d", bit2);
	printf("%d", bit3);
	printf("%d", bit4);
	printf("%d", bit5);
	printf("%d", bit6);
	printf("%d", bit7);
	printf("%d", bit8);

}//end main ()
