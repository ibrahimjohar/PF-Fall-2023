/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 23 November 2023
*   Description: Create a structure named Date having day, month and year as its elements. 
                 Store the current date in the structure. Now add 45 days to the current date and display the final date.
*
*/
#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct Date currentDate;

    printf("Enter current Day: ");
    scanf("%d", &currentDate.day);
    printf("Enter current Month: ");
    scanf("%d", &currentDate.month);
    printf("Enter current Year: ");
    scanf("%d", &currentDate.year);

    if (currentDate.month == 2)
    {
        if ((currentDate.year % 4 == 0 && currentDate.year % 100 != 0) || (currentDate.year % 400 == 0))
        {
            currentDate.day = currentDate.day + 45;
            currentDate.day = currentDate.day - 29;
            currentDate.month++;
        }
        else
        {
            currentDate.day = currentDate.day + 45;
            currentDate.day = currentDate.day - 28;
            currentDate.month++;
        }
    }
    else if (currentDate.month == 4 || currentDate.month == 6 || currentDate.month == 9)
    {
        currentDate.day = currentDate.day + 45;
        currentDate.day = currentDate.day - 30;
        currentDate.month++;
    }
    else if (currentDate.month == 3 || currentDate.month == 5 || currentDate.month == 7 || currentDate.month == 8 || currentDate.month == 10)
    {
        currentDate.day = currentDate.day + 45;
        currentDate.day = currentDate.day - 31;
        currentDate.month++;
    }
    else if (currentDate.month == 1)
    {
        currentDate.day = currentDate.day + 45;
        currentDate.day = currentDate.day - 31;
        currentDate.month++;
        if ((currentDate.year % 4 == 0 && currentDate.year % 100 != 0) || (currentDate.year % 400 == 0))
        {
            if (currentDate.day >= 29)
            {
                if (currentDate.day > 29)
                {
                    currentDate.day = currentDate.day - 29;
                    currentDate.month++;
                }
            }
            else if (currentDate.day >= 28)
            {
                if (currentDate.day > 28)
                {
                    currentDate.day = currentDate.day - 28;
                    currentDate.month++;
                }
            }
        }
    }
    else if (currentDate.month == 11)
    {
        if (currentDate.day > 16)
        {
            currentDate.day = currentDate.day + 45;
            currentDate.day = currentDate.day - 31;
            currentDate.month = 1;
            currentDate.year++;
        }
        else if (currentDate.day < 16)
        {
            currentDate.day = currentDate.day + 45;
            currentDate.day = currentDate.day - 30;
            currentDate.month++;
        }
    }
    else if (currentDate.month == 12)
    {
        currentDate.day = currentDate.day + 45;
        currentDate.day = currentDate.day - 31;
        currentDate.month = 1;
        currentDate.year++;
        if (currentDate.day > 31)
        {
            currentDate.month++;
            currentDate.day = currentDate.day - 31;
        }
    }
    else
    {
        printf("enter month from 1 - 12 only!");
    }

    printf("Date after 45 days: %02d/%02d/%02d", currentDate.day, currentDate.month, currentDate.year);
}
