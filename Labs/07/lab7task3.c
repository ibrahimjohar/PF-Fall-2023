/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 10 October 2023
 * Description: Take a number from user and count the sum of their digits.
				Input: 206
				Output: 8
				Input: 4569
				Output: 24
 */
 
 #include <stdio.h>
 
 int main()
 {
 	int num, rem, sum=0; //declare and initialize variables
 	
 	//input number
 	printf("Enter a number: ");
 	scanf("%d", &num);
 	
 	while (num!=0) //while loop
 	{
 		rem = num % 10; //determine individual integer
 		sum = sum + rem; //add integer to sum
 		num = num/10; //remove one integer from the integer number 
	} //end while loop
	
	//print the sum
	printf("Sum is: %d", sum);
	
	return 0;
 }//end main()
 
