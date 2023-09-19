/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 19 September 2023
 * Description: Print the actual amount, saved amount and the amount after discount.
 */

#include <stdio.h>

int main(){
	
	//decleration of variables

	float sc, aa, sa, ad; //sc = shopping cost, aa = actual amount, sa = saved amount, ad = amount after discount
	
	//input shopping cost

	printf("Enter your total shopping cost: ");
	scanf("%f", &sc);

	//store shopping cost as actual amount

	aa = sc;

	//conditions

	if (sc >= 2000 && sc <= 4000)
	{
		sa = sc * 0.2;
		ad = sc - sa;
	}
	else if (sc >= 4001 && sc <= 6000)
	{
		sa = sc * 0.3;
		ad = sc - sa;
	}
	else if (sc > 6000)
	{
		sa = sc * 0.5;
		ad = sc - sa;
	}
	else 
	{
		sa = 0;
		ad = aa;
	}//conditions end
	
	//printing of actual amount, saved amount and amount after discount

	printf("The actual amount was: %f", aa);
	printf("\n");
	printf("The saved amount was: %f", sa);
	printf("\n");
	printf("The amount after discount was: %f", ad);	

}//end main ()
