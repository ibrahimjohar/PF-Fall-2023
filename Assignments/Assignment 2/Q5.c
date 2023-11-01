/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 30 October 2023
*   Description: Q5:
                Write a C program to find all Ramanujan-Hardy numbers less than n^3.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num, p1, p2, sum = 0;
    
    printf("Enter N to print all Ramanujan-Hardy numbers less than N^3: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            for (int k = 0; k < num; k++)
            {
                for (int l = 0; l < num; l++)
                {
                    if (i != j && i != k && i != l && j != k && j != l && k != l)
                    {
                        p1 = pow(i,3) + pow (j, 3);
                        p2 = pow(k,3) + pow (l,3);
                        if (p1 == p2 && sum != p1)
                        {
                            if (sum < p1)
                            {
                                sum = p1;
                                printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", p1,i,j,k,l);
                            }
                        }
                        
                    }
                }
            }
        }
    }

}
