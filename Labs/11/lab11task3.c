/*
*   Programmer: Ibrahim Johar Farooqi (23K-0074)
*   Description: Write a program to compare two dates entered by the user. Make a structure named Date to store
                the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal"
                otherwise display "Dates are not equal".
*   Date: 21 November 2023
*/

#include <stdio.h>

int main()
{
    struct Date
    {
        int day;
        int month;
        int year;
    }; //struct defintion
    
    struct Date date1; //initialisation of date1 variable

    //input date 1
    printf("Enter Day for Date 1: ");
    scanf("%d", &date1.day);
    printf("Enter Month for Date 1: ");
    scanf("%d", &date1.month);
    printf("Enter Year for Date 1: ");
    scanf("%d", &date1.year);

    struct Date date2; //initialisation of date2 variable
    
    //input date 2
    printf("Enter Day for Date 2: ");
    scanf("%d", &date2.day);
    printf("Enter Month for Date 2: ");
    scanf("%d", &date2.month);
    printf("Enter Year for Date 2: ");
    scanf("%d", &date2.year);

    //check if all date elements of date 1 and date 2 are equal
    if ((date1.day == date2.day) && (date1.month == date2.month) && (date1.year == date2.year))
    {
        printf("Dates are equal."); //print if all elements are equal
    }
    else
    {
        printf("Dates are not equal."); //print if all elements are not equal
    }

}//end main()
