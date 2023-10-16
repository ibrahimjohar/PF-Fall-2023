#include <stdio.h>

int main(){
	float w, h, bmi = 0;
	
	//inputs
	
	printf("Enter your weight in kilograms: ");
	scanf("%f", &w);
	printf("Enter your height in centimeters: ");
	scanf("%f", &h);
	
	//conversion of height to meters
	//1 meter = 100 cm
	
	h = h / 100;
	
	//bmi calculation
	
	bmi = w / (h * h);
	printf("BMI: %f \n", bmi);

	//bmi outputs
	
	if (bmi > 25.0)
	{
		printf("You are overweight!");
	}			
	else if (bmi >= 18.5 && bmi <= 24.9)
	{
		printf("You have a healthy weight!");
	}
	else if (bmi < 18.5) 
	{
		printf("You are underweight!");
	}
	else 
	{
		printf("invalid values of height and weight! please enter valid values again!");
	}
	
}//end main()