/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 24 October 2023
 * Description: You are given an array of integers. Write a C program that defines a user-defined function processArray to calculate 
                the sum, maximum, and minimum values in the array.
                The program should take the array and its size as parameters and use the function to compute these values.
                Input: Array is [4, 8, 1, 15, 6]
                Output:
                Array Sum: 34
                Maximum Value: 15
                Minimum Value: 1
*/

#include <stdio.h>

void processArray(int arr[], int sizeArr, int *sum, int *maxVal, int *minVal);//function definition

int main()
{
    int arr[100];//declare array
    int sizeArr;//declare size of array

    //input size of array from user
    printf("Enter n: ");
    scanf("%d", &sizeArr);

    //input values of array from user
    for (int i = 0; i < sizeArr; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int sum, maxVal, minVal;//declare variables to store calculations 

    processArray(arr, sizeArr, &sum, &maxVal, &minVal);//calling of the 'processArray' function
    
    //output the calculations and stats
    printf("Array Sum: %d\n", sum);
    printf("Maximum Value: %d\n", maxVal);
    printf("Minimum Value: %d\n", minVal);

    return 0;
}//end main()

void processArray(int arr[], int sizeArr, int *sum, int *maxVal, int *minVal)//function to calculate array sum, and determine max and min values
{
    //initialisation of variables
    *sum = 0;
    *maxVal = arr[0];
    *minVal = arr[0];

    for (int i = 0; i < sizeArr; i++)//for loop to calculate sum and determine max and min values
    {
        *sum = *sum + arr[i];

        if (arr[i]>*maxVal)//check for max value
        {
            *maxVal = arr[i];
        }
        if (arr[i]<*minVal)//check for min value
        {
            *minVal = arr[i];
        }
    }//end for loop 

}//end function 'processArray'




