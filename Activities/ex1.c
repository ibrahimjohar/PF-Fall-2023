#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
	float reg, sale;
	int p_off;
	
	printf("Enter Regular price: ");
	scanf("%f", &reg);
	printf("Enter Percent Off: ");
	scanf("%d", &p_off);
	
	sale = discount(reg, p_off);
	printf("Sale price: %.2f\n", sale);
	
}

float discount(float price, int percentage)
{
	return price * (100 - percentage) / 100; 
}
