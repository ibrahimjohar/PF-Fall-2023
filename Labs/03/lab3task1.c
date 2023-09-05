#include <stdio.h>
int main() {
	int len = 0, width= 0, depth = 0, volume = 0;
	printf("Welcome to your very own cuboid calculation programme");
	printf("\n");
	printf("Enter Length: ");
	scanf("%d" ,&len);
	printf("\n");
	printf("Enter Width: ");
	scanf("%d" ,&width);
	printf("\n");
	printf("Enter Depth: ");
	scanf("%d" ,&depth);
	printf("\n");
	volume = len*width*depth;
	printf("Your container's volume is: %d" ,volume);
	return 1;
}//end main()
