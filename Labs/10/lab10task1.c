/*
*   Programmer: Ibrahim Johar Farooqi
*   Description: Creating a universal array printing function. 
*                Create a function in C that takes a void* as an argument along with size and some way of know what kind of data is stored. 
*                Then prints the values stored in the memory location pointed to by the void pointer. Use appropriate casting.
*   Date: 14 November 2023
*/

#include <stdio.h>
#include <stdlib.h>

void print_A(void *arr, int size, char dt); //function prototype

int main()
{
    char char_arr[] = {'a', 'b', 'c', 'd', 'e'}; //character array initialisation
    float float_arr[] = {2.75, 3.65, 4.145, 1.165}; //float array initialisation
    int int_arr[] = {5, 8, 9, 10, 11}; //integer array initialisation

    char dt; //declare variable to store datatype

    //input datatype from user
    printf("Enter datatype ('d' or 'c' or 'f'): ");
    scanf("%c", &dt);

    //calculation of sizes of each array
    int size_int = sizeof(int_arr) / sizeof(int_arr[0]);
    int size_float = sizeof(float_arr) / sizeof(float_arr[0]);
    int size_char = sizeof(char_arr) / sizeof(char_arr[0]);

    //switch case for different datatypes
    switch (dt)
    {
    case 'd':
        print_A((void *)int_arr, size_int, dt); //call function for integer array
        break;
    case 'f':
        print_A((void *)float_arr, size_float, dt); //call function for float array 
        break;
    case 'c':
        print_A((void *)char_arr, size_char, dt); //call function for character array
        break;
    default:
        break;
    }//end switch case

}//end main()

void print_A(void *arr, int size, char dt) //function definition
{
    for (int i = 0; i < size; i++)
    {
        //switch case for each datatype
        switch (dt)
        {
        case 'd':
            printf("%d ", *((int *) arr + i));
            break;
        case 'f':
            printf("%.2f ", *((float *) arr + i));
            break;
        case 'c':
            printf("%c ", *((char *) arr + i));
            break;
        default:
            printf("Wrong datatype entered.");
            break;
        }//end switch case
    }
}//end function

