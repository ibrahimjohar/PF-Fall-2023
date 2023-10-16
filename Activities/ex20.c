#include <stdio.h>
#include <stdbool.h>

int isFound(int arr2[2][2],int length, int value);

int main()
{
    int arr2[2][2];

    //input array 
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    //output array
    printf("Your inputted array: ");
    for (int i=0; i<2; i++)
    {
        printf("\n");
        for (int j=0; j<2; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
    }

    //search for a value
    int val;
    printf("enter a value you would like to search: ");
    scanf("%d", &val);

    //check with function
    if (isFound(arr2, 2, val)==1)
    { 
        printf("found");
    }
}

int isFound(int arr2[2][2],int length, int value)
{
    int i, j, flag = 1;
    for (i=0; i<length; i++)
    {
        for (j=0; j<length; j++)
        {
            if (arr2[i][j] == value) 
            {
                return 1;
            }
            else 
            {
                return 0;
            }
        }
    } 
}