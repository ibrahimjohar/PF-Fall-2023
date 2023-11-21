/*
*   Programmer: Ibrahim Johar Farooqi (23K-0074)
*   Description: Write a structure to store the names, salary and hours of work per day of 10 employees in a company.
                 Write a program to increase the salary depending on the number of hours of work per day as follows 
                 and then print the name of all the employees along with their final salaries.
                    ● Hours of work per day  8    10   >=12
                    ● Increase in salary    $50  $100  $150
*   Date: 21 November 2023
*/

#include <stdio.h>
#include <stdlib.h>

struct pay
    {
        char name[50];
        float salary;
        int hrs;
    };

int main()
{
    struct pay employees[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter information for employee %d: \n", i+1);
        printf("Enter name of employee: ");
        scanf("%s", &employees[i].name);
        printf("Enter current salary: ");
        scanf("%f", &employees[i].salary);
        printf("Enter hours worked: ");
        scanf("%d", &employees[i].hrs);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The salary of employee %s is: ", employees[i].name);
        if (employees[i].hrs == 8)
        {
            printf("%f", employees[i].salary + 50);
        }
        else if (employees[i].hrs == 10)
        {
            printf("%f", employees[i].salary + 100);
        }
        else if (employees[i].hrs >= 12)
        {
            printf("%f", employees[i].salary + 150);
        }
        else 
        {
            printf("%f", employees[i].salary);
        }
    }
}
