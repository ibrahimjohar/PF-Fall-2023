/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 30 October 2023
*   Description: Q8:
                You are to write a program that will continually prompt the user to enter a positive integer until EOF has been entered via the keyboard.
                For each number entered your program should output the persistence of the number.
*/

#include <stdio.h>
#include <stdlib.h>

int persistence(int n);

int main()
{
    int p_val;
    char in[1000];
    printf("EOF is '0'.\n");

    while(1)
    {
        printf("Enter positive integer: ");
        gets(in);

        if (atoi(in) != 0)
        {
            if (atoi(in) > 0)
            {
                printf("%d's Persistence number is: %d\n", atoi(in), persistence(atoi(in)));
            }
            else
            {
                printf("Enter a positive number please.\n");
            }
        }
        else
        {
            break;
        }
    }

}


int persistence(int n)
{
    int p_val = 0; //declaration & initialization of variable to store persistance value 
    int prod = 1; //declaration & initialization of variable to store product of product

    while (n>=10)
    {
        prod = 1;
        while (n>0)
        {
            prod = prod * (n % 10);
            n = n / 10;
        }
        n = prod;
        p_val++;
    }
    return p_val;
}
