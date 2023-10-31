/*
 * Programmer: Ibrahim Johar Farooqi
 * Date: 31 October 2023
 * Description: A. Desired result, that is the values of j and k are not swapped. Why is this?
                B. Modify the function swap and its call at line 12 to get the desired result.
                Write the answer to question A in the comments of the program for part B.
 */

#include <stdio.h>

void swap(int *a, int *b)//function defined for swap operation of two pointer variables
{
    int tmp = *a; //'temp' stores value of 'a'
    *a = *b; //value of b is stored in 'b'
    *b = tmp;//value of 'temp' is stored in 'b'
}//end function swap

int main()
{
    int j = 2, k =5;//declaration & initialisation of variables
    printf("j=%d, k=%d\n",j,k);//print values before swap
    swap(&j,&k);//call function swap 
    printf("j=%d, k=%d\n", j,k);//print values after swap
    return 0;
}//end main()

//  Q.Desired result, that is the values of j and k are not swapped. Why is this?
//  Ans: The swap was not successful because 'b' was storing the new value of 'a', rather than the value of 'tmp' where the original value of 'a' was stored.
