/*
* Programmer: Ibrahim Johar Farooqi
* Date: 10 October 2023
* Description: Take an array with N elements as input, and then output the frequency of each element present in the array.
*/

#include <stdio.h>

int main()
{
    int arr[20]; //declare array
    int n; //variable n, to take input from user 

    //input from user on the size of the array
    printf("N: "); 
    scanf("%d", &n);

    //input values of the array from the user
    for(int i=0; i<n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int count; //declare variable to store the frequency of a number in the array
    int freq[20]; //declare array to store the frequency of the numbers in the input array

    for (int i = 0; i<n; i++)//initialise the frequency array to 0 
    {
        freq[i] = 0;
    }

    for (int i = 0; i<n; i++)//loop to check each individual element of the array
    {
        count = 1;//count is set to 1 because the numbers present in the array are present atleast once
        for (int j = i + 1; j<n; j++)//loop to check the next element, if it has the same element value
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = -1; //store temp value to use as flag later on 
            }
        }//end for loop for checking next element

        if (freq[i] != -1) //store count value in frequency array
        {
            freq[i] = count;
        }
    }//end outer for loop
    
    for (int i = 0; i < n; i++)//print frequency array
    {
        if (freq[i] != -1)//only print frequencies which have count value stored in them
        {
            printf("\nThe frequency of %d is %d\n", arr[i], freq[i]);
        }
    }
}//end main()
