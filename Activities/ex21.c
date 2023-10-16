#include <stdio.h>

//row represents a diff department
//column represents a day of the workweek

int main()
{
    int nDep;
    printf("How many departments would you like to keep track of? ");
    scanf("%d", &nDep);
    //input 2d array
    int arr[10][10];
    
    for (int i = 0; i < nDep; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Number of hours worked on workweek day %d for department %d: ", j+1, i+1);
            scanf("%d", &arr[i][j]);
        }
    }

    //average number of hours worked each day for all departments combined
    int totalHrsDay = 0;
    float totalAvg = 0.00;
    for (int i =0; i<nDep; i++)
    {
        for(int j = 0; j<5; j++)
        {
            totalHrsDay = totalHrsDay + arr[i][j];
        }
    }
    
    totalAvg = (float) totalHrsDay / 5;
    printf("The Average number of hours worked each day for all the departments combined: %.2f\n", totalAvg);

    //the department that worked the most hours on each day of the week 
    int maxSum = 0, indexlocation;
    for (int i = 0; i < nDep; i++)
    {
        int sumRow = 0;
        for (int j = 0; j < 5; j++)
        {
            sumRow = sumRow + arr[i][j];
        }

        if (sumRow>maxSum)
        {
            maxSum = sumRow;
            indexlocation = i;
        }

    }

    printf("The department that worked the most hours each day of the week was: Department %d\n", indexlocation + 1);

    //the department that worked the fewest hours on each day of the week 
    int minSum = 1<<31 , minRow = -1;
    for (int i = 0; i < nDep; i++)
    {
        int sumRow = 0;
        for (int j = 0; j < 5; j++)
        {
            sumRow = sumRow + arr[i][j];
        }

        if (sumRow < minSum)
        {
            minSum = sumRow;
            minRow = i;
        }

    }

    printf("The department that worked the fewest hours each day of the week was: Department %d\n", minRow);


}
