/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 24 October 2023
 * Description: You are developing a C program for a coffee shop that offers discounts based on customer loyalty and purchase history.
                The program should work as follows:
                The program should have a user-defined function named calculateDiscount that takes two parameters: the customer's total purchase
                amount and the number of times they have visited the shop in the past month.
                determine the discount based on the following criteria:
                1. If the customer has visited the shop more than 10 times in the past month and their total purchase amount is $50 or more,
                they get a 15% discount.
                2. If the customer has visited the shop more than 5 times in the past month and their total purchase amount is $30 or more,
                they get a 10% discount.
                3. For all other customers, no discount is applied.
                The function should return the calculated discount amount.
                In the main part of the program, prompt the user to input their total purchase amount and the number of times they
                have visited the shop. Call the calculateDiscount function to calculate the discount, and display the discount
                amount to the user.
*/

#include <stdio.h>

float calculateDiscount(int totalAmt, int nVisits);//function definition

int main()
{
    int totalAmt, nVisits;//declare input variables

    //input from user
    printf("Number of times you have visited the shop in the last month: ");
    scanf("%d", &nVisits);
    printf("Total purchase amount: $");
    scanf("%d", &totalAmt);

    //output the discount amount whilst calling calculateDiscount function
    printf("The discount is: $%.2f", calculateDiscount(totalAmt, nVisits));
}

float calculateDiscount(int totalAmt, int nVisits)//function to calculate discount amount 
{
    float discountAmt;//declaration of variable to store discount amount

    //calculation of discount according to conditions
    if (nVisits>10 && totalAmt>=50)
    {
        discountAmt = (float) totalAmt * 0.15;
    }
    else if ((nVisits>5 && nVisits<=10) && totalAmt>=30)
    {
        discountAmt = (float) totalAmt * 0.10;
    }
    else
    {
        discountAmt = 0.00;
    }//end if statement

    return discountAmt;

}//end function 'calculateDiscount'
