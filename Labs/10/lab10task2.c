/*
*  Name: Ibrahim Johar Farooqi
*  Date: 16 November 2023
*  Description: Write a C program that implements a function to swap the values of two variables using only pointers (without using any arithmetic or temporary variables).
                Your function should be generic and work for variables of different data types. Hint: Use bitwise operator XOR.
*/

#include <stdio.h>

void swap(void *a, void *b, size_t size) 
{
     char *byte_a = (char*)a;
     char *byte_b = (char*)b;

    while (size--) 
    {
        *byte_a ^= *byte_b;
        *byte_b ^= *byte_a;
        *byte_a ^= *byte_b;

        byte_a++;
        byte_b++;
    }
}

int main() 
{
    int x, y;
    
    printf("Enter Num 1: ");
    scanf("%d",&x);
    printf("Enter Num 2: ");
    scanf("%d",&y);
    
    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y, sizeof(int));

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
