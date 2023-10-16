/*Barcode category program.*/

#include <stdio.h>

int main()
{
    int barcode[5];
    for (int i=0; i<5; i++)
    {
        printf("Enter barcode element %d: ", i+1);
        scanf("%d", &barcode[i]);
    }

    if ((barcode[0] % 2 == 0 && barcode[1] % 2 == 0) || (barcode[0] % 4 == 0 && barcode[1] % 4 == 0))
    {
        printf("Category 1");
    }
    else if ((barcode[4] % 3 == 0) && (barcode[3] % 2 != 0))
    {
        printf("Category 2");
    }
    else
    {
        printf("Category 3");
    }
}

