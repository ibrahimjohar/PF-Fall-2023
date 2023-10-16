#include <stdio.h>
int main()
{
	int accNum, bcNum, pcNum, addCon = 0;
	float amtDue = 0.0;
	char customer;
	
	printf("Enter account number: ");
	scanf("%d", &accNum);
	printf("Enter customer type: ");
	scanf(" %c", &customer);
	printf("Enter the number of basic service connections: ");
	scanf("%d", &bcNum);
	printf("Enter the number of premium channels: ");
	scanf("%d", &pcNum);
	
	switch (customer)
	{
		case 'r':
			amtDue = 4.50 + (bcNum * 20.50) + (pcNum * 7.50);
			break;
		case 'b':
			if (bcNum > 10)
			{
				addCon = bcNum - 10;
				amtDue = 15.00 + (75.00 + (addCon * 5.00) + (pcNum * 50.00));
			}
			else
			{
				amtDue = 15.00 + 75.00 + (pcNum * 50.00);
			}
			break;
		default: 
			printf("Invalid customer type entered!\n");
	}
	
	printf("Account Number: %d", accNum);
	printf("\n");
	printf("Amount Due: $%f", amtDue);
	
}//end main()