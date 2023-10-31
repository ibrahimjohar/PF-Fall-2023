#include <stdio.h>

int main()
{
    int arr[100][100];
    int nShirts;

    printf("number of shirts: ");
    scanf("%d", &nShirts);

    //input into 2d array
    for (int i = 0; i < nShirts; i++)
    {
        int j = 0;
        printf("enter age of shirt %d: ", i+1);
        scanf("%d", &arr[i][j]);
        printf("enter price of shirt %d: ", i+1);
        scanf("%d", &arr[i][j+1]);
    }

    //printing of original 2d array
    printf("          Age\t Price\n");
    for (int i = 0; i < nShirts; i++)
    {
        printf("Shirt %d: ", i+1);
        for (int j = 0; j < 2; j++)
        {
            printf("  %d\t", arr[i][j]);
        }
        printf("\n");
    }

    int age[100];
    int price[100];
    int temp;

    //insert values into arrays
    for (int i = 0; i < nShirts; i++)
    {
        age[i] = arr[i][0];
    }

    for (int i = 0; i < nShirts; i++)
    {
        price[i] = arr[i][1];
    }

    for (int i = 0; i < nShirts - 1; i++)
    {
        for (int j = 0; j < nShirts - 1; j++)
        {
            if (age[j] > age[j+1])
            {
                temp = age[j];
                age[j] = age[j+1];
                age[j+1] = temp;
                
                temp = price[j];
                price[j] = price[j+1];
                price[j+1] = temp;
            }
        }
    }


    printf("Ascending order with respect to age:\n");
    for (int i = 0; i < nShirts; i++)
    {
        printf("Age: %d, Price: %d\n", age[i], price[i]);
    }

    for (int i = 0; i < nShirts - 1; i++)
    {
        for (int j = 0; j < nShirts - 1; j++)
        {
            if (age[j]==age[j+1] && price[j]<price[j+1])
            {
                temp = age[j];
                age[j] = age[j+1];
                age[j+1] = temp;
                
                temp = price[j];
                price[j] = price[j+1];
                price[j+1] = temp;
            }
            else if (price[j]<price[j+1])
            {
                temp = age[j];
                age[j] = age[j+1];
                age[j+1] = temp;
                
                temp = price[j];
                price[j] = price[j+1];
                price[j+1] = temp;
            }
        }
    }

    printf("\nDescending order with respect to price:\n");
    for (int i = 0; i < nShirts; i++)
    {
        printf("Age: %d, Price: %d\n", age[i], price[i]);
    }

}
