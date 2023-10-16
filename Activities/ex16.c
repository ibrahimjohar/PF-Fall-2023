/*Write a program in C to copy the elements of one array into another array.*/

#include <stdio.h>

int main()
{
    int arr1[3];
    int arr2[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter element - %d - Array 1: ", i);
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i <3; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("\nThe elements stored in Array 2 are: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Element stored at Array 2 [%d] is: %d\n", i, arr2[i]);
    }
}