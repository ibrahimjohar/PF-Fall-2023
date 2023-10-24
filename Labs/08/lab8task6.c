/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 24 October 2023
 * Description: You are given an array of integers. Write a C program that defines a user-defined function processArray to calculate the sum, maximum, and minimum values in the array.
                The program should take the array and its size as parameters and use the function to compute these values.
                Input: Array is [4, 8, 1, 15, 6]
                Output:
                Array Sum: 34
                Maximum Value: 15
                Minimum Value: 1
*/

#include <stdio.h>

 processArray(int arr[], int size, int *sum, int *max, int *min){
    *sum = 0;
    *max = arr[0];
    *min = arr[0];
    
    int i;

    for ( i = 0; i < size; ++i) {
        *sum += arr[i];

        if (arr[i] > *max) {
            *max = arr[i];
        }

        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[] = {4, 8, 1, 15, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum, max, min;

    processArray(arr, size, &sum, &max, &min);

    printf("Array Sum:\n%d\n\n", sum);
    printf("Maximum Value: %d\n", max);
    printf("Minimum Value: %d\n", min);

    return 0;
}
