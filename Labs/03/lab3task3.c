#include <stdio.h>

int main() {
	float og_price = 0, sale_price = 0, discount = 0; 
	printf("Enter the original price: ");
	scanf("%f" ,&og_price);
	printf("Enter the discount: ");
	scanf("%f" ,&discount);
	discount = og_price*(discount/100);
	sale_price = og_price - discount; 
	printf("The sale price is: %f" , sale_price);
	return 1;

}//end main ()
