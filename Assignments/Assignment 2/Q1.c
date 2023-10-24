/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 25 October 2023
*   Description: Q1:
                You are given a 2D array that represents the batting performance of a cricket team. 
                Each row in the array corresponds to a different batsman, and each column represents an inning
                played by that batsman. The values in the array represent the runs scored by each batsman 
                in each inning.Write a C program to perform the following tasks:
                    1) Input the number of batsmen and the number of innings from the user.
                    2) Input the batting performance for each batsman in each inning.
                    3) Calculate and display the following statistics for each batsman.
                        ● Total runs scored.
                        ● Average runs per inning
                        ● Highest score in a single inning
                        ● Number of centuries (innings with a score of 100 or more)
                        ● Number of half-centuries (innings with a score of 50-99)
                Your program should display the statistics for each batsman individually.
*/

#include <stdio.h>

int main()
{
    int nBatsmen, nInnings; //declare variables

    //input from user
    printf("Enter number of batsmen: ");
    scanf("%d", &nBatsmen);
    printf("Enter number of innings: ");
    scanf("%d", &nInnings);

    int arr[100][100]; //declare array

    //take score input from user
    for (int i = 0; i < nBatsmen; i++)
    {
        for (int j = 0; j < nInnings; j++)
        {
            printf("Enter innings %d score for batsmen %d: ", j+1, i+1);
            scanf("%d", &arr[i][j]);
        }
    }

    //declare statistics variables
    int totalRuns, highestRuns, nCenturies, nHalfCenturies;
    float avgRuns;

    //for loop, to loop through the 2d array to calculate statistics for each batsman
    for (int i = 0; i < nBatsmen; i++)
    {
        //initialise statistics variables
        avgRuns = 0.0, totalRuns = 0, highestRuns = arr[i][0], nCenturies = 0, nHalfCenturies = 0;
        for (int j = 0; j < nInnings; j++) //inner for loop to loop through each inning
        {
            totalRuns += arr[i][j]; //calculate total runs scored
            if (arr[i][j]>highestRuns) //determine highest score
            {
                highestRuns = arr[i][j];
            }
            if (arr[i][j]>=50 && arr[i][j]<100) //check for number of half centuries
            {
                nHalfCenturies++;
            }
            if (arr[i][j]>=100) //check for number of centuries
            {
                nCenturies++;
            }
        }//end inner for loop

        avgRuns = (float)totalRuns/(float)nInnings; //calculate average

        //output all stats for individual batsman
        printf("Batsman %d stats: \n", i+1);
        printf("Total Runs Scored: %d\n", totalRuns);
        printf("Average Runs per innings: %.2f\n", avgRuns);
        printf("Highest Score in a single innings: %d\n", highestRuns);
        printf("Number of Half Centuries: %d\n", nHalfCenturies);
        printf("Number of Centuries: %d\n\n", nCenturies);

    }//end for loop

}//end main()
