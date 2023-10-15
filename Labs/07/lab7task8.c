/*
* Programmer: Ibrahim Johar Farooqi 
* Date: 10 October 2023
* Description: Take an array with N elements as input, and sort the array into ascending order and then print the sorted version.
*/

#include <stdio.h>

int main()
{
    int arr[100];//declare array
    int n;//declare and initialse variable to take input from user in

    //take input from user
    printf("Enter size of array: ");
    scanf("%d", &n);

    //input unsorted values in array
    for(int i=0; i<n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    //loop for number of times, the array is going to be checked
    for(int i=0; i<n; i++)
    {
        //loop for swapping unsorted pairs
        for(int j=0; j<n-1; j++)
        {
            //cheching if the next number is greater than the previous number, if so; then swap
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }//end if statement

        }//end inner for loop

    }//end outer for loop

    //print sorted array
    printf("The array has now been sorted into ascending order: ");
	
    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
	
}//end main()
