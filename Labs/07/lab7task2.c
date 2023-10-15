/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 10 October 2023
 * Description: Given an array of integers of size N and an integer “d”, the task is to rotate the array elements to the left by d positions. 
 *              Note: Solve the question without declaring another array. (The input array itself must be modified).
 */

#include <stdio.h>

int main()
{
    int arr[7];//declare array
    int d = 2;//times of left shift

    //calculating and checking length of array
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("The size of array is: %d\n", len);

    for (int i=0; i<7; i++)//inputs of the array from the user 
    {
        printf("Enter element no.%d: ", i);
        scanf("%d", &arr[i]);
    }//end for loop
    
    for (int i= 0; i<d; ++i)//loop to shift the array left d times
    {
        int temp = arr[0];
        int j;
        
        for (j = 0; j<len; ++j)//loop to shift elements left
        {
            arr[j] = arr[j+1];
        }//end for loop

        arr[j] = temp;//store the first element at the end 
    }//end for loop

    //print rotated array
    printf("The rotated array is: ");
    for (int i=0; i<7; i++)
    {
        printf("%d ", arr[i]);
    }//end for loop

}//end main()
