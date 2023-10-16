#include <stdio.h>

int main()
{
    int arr[12];
    for (int i = 0; i<12; i++)
    {
        printf("Enter digit %d: ", i);
        scanf("%d", &arr[i]);
    }

    int evenSum = 0, oddSum = 0, checkDigit = 0;

    evenSum = arr[1] + arr[3] + arr[5] + arr[7] + arr[9] + arr[11];
    oddSum = arr[0] + arr[2] + arr[4] + arr[6] + arr[8] + arr[10];
    checkDigit = (oddSum * 2) + evenSum;

    printf("CheckDigit = %d\n", checkDigit);
    printf("Barcode: ");
    
    for (int i = 0; i < 12; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (arr[11] == 0 && checkDigit % 10 == 0)
    {
        printf("Barcode is validated!");
    }
    else 
    {
        printf("Barcode contains error!");
    }
}