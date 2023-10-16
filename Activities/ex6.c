/*
* Write a program in C to check whether a number is a prime number or not using the function.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int);

int main()
{
    int num;
    printf("enter your number: ");
    scanf("%d", &num);

    if(isPrime(num)==true)
    {
        printf("The number %d is prime.", num);
    }
    else 
    {
        printf("The number %d is not prime.", num);
    }
}

bool isPrime(int num)
{
    int factors=1;
    int i;
    for (i=2; i<=num; i++)
    {
        if (num % i == 0)
        {
            factors++;
        }
    }
    if (factors>2)
    {
        return false;
    }
    else
    {
        return true; 
    }
}