/*
* Write a program in C to check if a given number is even or odd using the function.
*/
#include <stdio.h>
#include <stdbool.h>

bool isEven(int);

int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if (isEven(num))
    {
        printf("The number entered is even.");
    }
    else
    {
        printf("The number entered is odd.");
    }
}

bool isEven(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
