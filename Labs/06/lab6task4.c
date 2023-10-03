/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 3 October 2023
 * Description: Consider Two integers a and b taken as input from the user. Using Loops iterate the value of
				a till the value of b. If the value of a<=9 the output should correspond to the 
				English representation of the numbers i.e., 8=Eight, 9=Nine etc.
				If the iteration exceeds 9 then the programs should print if the exceeded number is even or odd.
 */
 
#include <stdio.h>

int main()
{
	int a, b, count;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	for (count = a; count <= b; ++count)
	{
		switch(count)
		{
			case 0:
				printf("Zero");
				break;
			case 1:
				printf("One");
				break;
			case 2:
				printf("Two");
				break;
			case 3:
				printf("Three");
				break;
			case 4:
				printf("Four");
				break;
			case 5:
				printf("Five");
				break;
			case 6:
				printf("Six");
				break;
			case 7:
				printf("Seven");
				break;
			case 8:
				printf("Eight");
				break;
			case 9:
				printf("Nine");
				break;
			default:
				if(count % 2 == 0)
				{
					printf("Even.");
				}
				else
				{
					printf("Odd.");
				}
		}
	}
}
