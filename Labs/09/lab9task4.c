/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 31 October 2023
 * Description: Write a function for finding factorial of any integer N using recursion.
 */

#include <stdio.h>

int factorial(int n)//function definition of factorial
{
    //base case
    if (n == 1)
    {
        return 1; 
    }
    //recursive case
    else 
    {
        n = n * factorial(n - 1);
    }
}//end function factorial

int main()
{
    int n;//declare variable
    //take input from user
    printf("N: ");
    scanf("%d", &n);
    //call factorial function 
    factorial(n);
    //print the output
    printf("Factorial: %d", factorial(n));
}//end main()
