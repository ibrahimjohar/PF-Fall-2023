/*
*   Programmer: Ibrahim Johar Farooqi
*   Description: Write recursive function to print n Fibonacci numbers.
*   Date: 31 October 2023
*/

#include <stdio.h>

int fib(int n);//function prototype

int main()
{
    int n;//declare n variable
    
    //take input 
    printf("Enter the number of elements in the series: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));//print the fibonacci sequence
    }
    return 0;
}//end main()


int fib(int n)//function definition of a fibonacci sequence
{
    //base case
    if (n == 0)
    {
        return 0;
    }
    //2nd base case
    else if (n == 1)
    {
        return 1;
    }
    //recursive case
    else
    {
        return fib(n-1) + fib(n-2);
    }
}//end fibonacci sequence
