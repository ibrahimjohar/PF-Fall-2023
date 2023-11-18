/*
*   Programmer: Ibrahim Johar Farooqi
*   Description: Write a function for finding GCD first using loops and then using recursion.
*   Date: 31 October 2023
*/

#include <stdio.h>

int gcd(int a, int b)
{
    if (a==0)
    {
        return b;
    }
    if (b==0)
    {
        return a;
    }
    if (a==b)
    {
        return a; 
    }
    if (a>b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    int a, b;
    printf("Number 1: ");
    scanf("%d", &a);
    printf("Number 2: ");
    scanf("%d", &b);

    printf("The GCD of number 1 and number 2: %d", gcd(a,b));
}
