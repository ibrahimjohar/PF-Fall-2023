#include <stdio.h>

int main() {
	int kmS = 0, kmN = 0, kmW = 0, kmE = 0, fuelRate = 2, fuelConsumption = 0, totalKm;
	printf("Welcome to the Kilometer and Fuel Consumption Calculator!");
	printf("\n");
	printf("\n");
	printf("Enter distance covered south: ");
	scanf("%d" ,&kmS);
	printf("\n");
	printf("Enter distance covered north: ");
	scanf("%d" ,&kmN);
	printf("\n");
	printf("Enter distance covered east: ");
	scanf("%d" ,&kmE);
	printf("\n");
	printf("Enter distance covered west: ");
	scanf("%d" ,&kmW);
	totalKm = kmS + kmN + kmW + kmE;
	fuelConsumption = fuelRate * totalKm;
	printf("\n");
	printf("The total distance covered is: %d" ,totalKm);
	printf("\n");
	printf("\n");
	printf("The fuel consumption for this trip was: %d" ,fuelConsumption);
	return 1;
}//end main()
