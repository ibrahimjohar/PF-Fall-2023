#include <stdio.h>

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
    printf("\n");
    printf("enter a value you would like to search: ");
    scanf("%d", &val);

    //find element
    int i, j, flag;
    for (i =0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            if (arr2[i][j] == val)
            {
                flag = 1;
            }
            else 
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        printf("Your value: %d was found in the array.", val);
    }
    else 
    {
        printf("Your value: %d was not found in the array.", val);
    }

}
