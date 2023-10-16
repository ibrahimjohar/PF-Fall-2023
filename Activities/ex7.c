/*Write a program in C to get the largest element of an array using the function.*/

#include <stdio.h>

int isLargest(int arr[10]);

int main()
{
    int arr[10];
    int maxElement;
    for (int i = 0; i<10; i++)
    {
        printf("enter array element %d: ", i);
        scanf("%d", &arr[i]);
    }
    maxElement = isLargest(arr);
    printf("The largest number of this array is: %d", maxElement);
}

int isLargest(int arr[10])
{
    int maxVal = 0;
    for (int i = 0; i<10; i++)
    {
        if (arr[i]>arr[0])
        {
            if (arr[i]>maxVal)
            {
                maxVal = arr[i];
            }
        }
    }

    return maxVal;
}