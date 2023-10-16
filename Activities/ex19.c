/*Write a program in C to sort elements of an array in ascending order*/

#include <stdio.h>

int main()
{
    int arr[] = {5,9,70,1};
    int temp;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j<4; j++)
        {
            if (arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

}