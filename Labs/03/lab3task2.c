#include <stdio.h>
#include <math.h>

int main() {
	printf("Welcome to your hypotenuse calculation programme!");
	printf("\n");
	float perp = 0, base = 0, hyp = 0;
	printf("Enter the length of the perpendicular: ");
	scanf("%f", &perp);
	printf("Enter the length of the base: ");
	scanf("%f", &base);
	float ans = (perp*perp) + (base*base);
	hyp = sqrt(ans);
	printf("The length of the hypotenuse is %f" , hyp);
	return 1;	

}//end main()
