/*
* Programmer: Ibrahim Johar Farooqi 
* Date: 10 October 2023
* Description: Given an unsorted array A of size N that contains only non-negative integers, 
*              find a continuous sub-array which adds to a given number S. In case of multiple subarrays, 
*              return the subarray which comes first on moving from left to right.
*/

#include <stdio.h>

int main()
{
    int s, n;
    printf("Size of array (N): ");
    scanf("%d", &n);
    printf("S: ");
    scanf("%d", &s);

    int arr[50];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int firstIndex = 0, lastIndex = 0, sum = arr[0];
    int isSum = 0; //flag

    while (lastIndex<n)
    {
        if (sum == s)
        {
            isSum = 1;
            break;
        }
        else if (sum < s)
        {
            lastIndex++;
            sum = sum + arr[lastIndex];
        }
        else 
        {
            sum = sum - arr[firstIndex];
            firstIndex++;
        }
    }

    if (isSum == 1)
    {
        printf("The Elements from Index %d to %d when summed results in the output of %d.\n", firstIndex, lastIndex, s);
    }
    else
    {
        printf("No subarray found.");
    }
    
}
