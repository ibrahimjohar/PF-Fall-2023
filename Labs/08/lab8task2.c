/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 24 October 2023
 * Description: Write a C program with a user-defined function calculate to perform basic arithmetic operations such as addition,
                subtraction, multiplication, and division. The program should take two numbers and an operation choice as input,
                and then use the function to perform the operation.
 */

#include <stdio.h>

int calculator(int num1, int num2, char op);//function defintion

int main()
{
    int num1, num2;//declare variables
    char op;//declare arithematic operation variable

    //input from user
    printf("Enter Arithematic Operation: ");
    scanf("%c", &op);
    printf("Enter Num 1: ");
    scanf("%d", &num1);
    printf("Enter Num 2: ");
    scanf("%d", &num2);
    
    //output the answer by calling the function 
    printf("The answer is: %d", calculator(num1, num2, op));

}//end main()


int calculator(int num1, int num2, char op) //function to calculate arithematic operation between two numbers
{
    int ans;//declare variable to store result 

    //use of case switch logic to perform respective calculation 
    switch (op)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;
    default:
        break;
    }

    //return the answer of the function
    return ans;
}

