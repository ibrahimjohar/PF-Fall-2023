/*Write a program in C to find the maximum and minimum elements in an array.*/

#include <stdio.h>

int main()
{
    int arr[3];
    int max = 0, min = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (int i = 0; i < 3; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }


    min = arr[0];
    for (int i = 0; i < 3; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }

    printf("Max: %d\n", max);
    printf("Min: %d", min);
    
}