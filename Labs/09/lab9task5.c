/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 31 October 2023
 * Description: Write a function for finding product of 2 numbers without using multiplication operator and
                loops. Use recursion and addition only.
 */

#include <stdio.h>

int multiplication(int n1, int n2, int sum)//function definition of multiplication
{
    //base case
    if (n2==0) //if any of the input numbers are 0, multiplication always outputs 0
    {
        return sum;
    }
    //recursive case
    else
    {
        multiplication(n1, n2 - 1, sum + n1);//n1 remains constant and is added to sum until n2 is greater than 0
    }
}//end function multiplication

int main()
{
    int n1, n2, sum = 0;//declare input variables and initialize sum

    //input numbers from user
    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);

    //call multiplication function
    multiplication(n1, n2, sum);

    //output multiplication result
    printf("Ans: %d", multiplication(n1, n2, sum));

}//end main()
