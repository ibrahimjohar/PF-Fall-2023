#include <stdio.h>

int main()
{
    int n, m;
    int totalBranch = 0, maxBill = 0, maxBill_branch = 0, maxBill_phoneID = 0, maxBill_branchID = 0, billTotal = 0;

    printf("Enter the number of branches: ");
    scanf("%d", &n);
    printf("Enter the number of mobile phones in each branch: ");
    scanf("%d", &m);

    int bills_arr[100][100];
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf("Enter the bill for your respective branch%d, phone%d: ", i+1, j+1);
            scanf("%d", &bills_arr[i][j]);
        }
    }
    printf("\n");

    for (int i=0; i<n; i++)
    {
        totalBranch = 0;
        for (int j=0; j<m; j++)
        {
            totalBranch = totalBranch + bills_arr[i][j];

            if (bills_arr[i][j] > maxBill)
            {
                maxBill = bills_arr[i][j];
                maxBill_branchID = i;
                maxBill_phoneID = j;
            }
        }
        billTotal = billTotal + totalBranch;

        maxBill_branch = 0;
        
        if (totalBranch > bills_arr[maxBill_branch][0])
        {
            maxBill_branch = i;
        }
    }

    printf("The total bill for all branches is: %d\n", billTotal);
    printf("\nThe total bill for each branch is: \n");
    for(int i = 0; i<n; i++)
    {
        int totalBranch = 0;
        for(int j=0; j<m; j++)
        {
            totalBranch = totalBranch + bills_arr[i][j];
        }
        printf("Branch %d: %d\n", i + 1, totalBranch);
    }
    printf("\n");
    printf("The branch id with the max bill is: %d\n\n", maxBill_branch + 1);
    printf("The branch and mobile phone ids with the highest bill are: branch %d, phone %d\n", maxBill_branchID + 1, maxBill_phoneID + 1);
}
