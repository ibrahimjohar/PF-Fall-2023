/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 31 October 2023
 * Description: Given the function prototype below, implement the function that reverses the array passed
                to its arguments. Also write the main function that demonstrates this by taking 10 inputs from
                a user and storing them in an array. Print the array, then use our function reverse and print
                the array again to show that array has been reversed successfully. Use pointers in the function
                reverse.
 */

#include <stdio.h>

void reverse(int *arr, int size)//function definition of reversal of array
{
    int temp;//declare temporary variable
    for (int i = 0; i < (size/2); i++)//swap beginning index values with the end index values 
    {
        temp = arr[i]; //store in temp, to be later stored in the last respective index
        arr[i] = arr[size - 1 - i]; //store last respective index value in index i
        arr[size - 1 - i] = temp; //store temp in the last respective index value
    }//end for loop, swapping the first and last indices
    
}

int main()
{
    int arr[10];//declare array
    int size = 10;//declare & initialise size of array
    for (int i = 0; i < 10; i++)//take input from user
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    //print array 
    printf("Before reverse: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

    //call reverse array
    reverse(&arr, size);

    //print array after swap
    printf("\nAfter reverse: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

}//end main()
