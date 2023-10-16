/*sum the elements of an array*/

#include <stdio.h>

int main()
{
    int arr[3];

    for (int i = 0; i<3; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + arr[i];
    }

    printf("the sum is: %d", sum);
}