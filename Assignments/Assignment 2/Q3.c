/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 25 October 2023
*   Description: Q3:
                You are assisting a traveler who is planning a trip and needs to book a flight for a specific day and time
                slot. The traveler is looking for the most convenient day and time slot where flights are available. You have
                access to a 2D array representing the flight availability for different days and time slots.
*/

#include <stdio.h>

int main()
{
    int arr[5][5] = {{1, 1, 300, 0, 0}, {2, 1, 320, 1, 310}, {3, 0, 0, 1, 280}, {4, 1, 380, 0, 0},{5, 1, 375, 1, 400}};
    int flightAvailM[5] = {-1};
    int flightAvailE[5] = {-1};
    int nDay;
    printf("Day 1 - Monday\nDay 2 - Tuesday\nDay 3 - Wednesday\nDay 4 - Thursday\nDay 5 - Friday\n\n");
    printf("Enter Day # (1-5) you would like to search flights for: ");
    scanf("%d", &nDay);

    //store available flight numbers in new array
    for (int i = 0; i < 5; i++)
    {
        int j = 1;
        if (arr[i][j] == 1)
        {
            flightAvailM[i] = i+1;
        }           
    }

    //print 2d array chart
    printf("Day\tMorning\tPrice\tEvening\tPrice\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    //tickets available in the morning
    printf("Morning Tickets:\n");
    for (int i = 0; i < 5; i++)
    {
        if (flightAvailM[i] >= 1)
        {
            printf("Ticket Available in the morning on Day %d\n", flightAvailM[i]);
        }
    }
    printf("\n");

    int cheapTicket = arr[0][2];
    int cheapDay = 1;

    for (int i = 0; i < 5; i++)
    {
        if ((arr[i][2]<cheapTicket) && (arr[i][2] != 0))
        {
            cheapTicket = arr[i][2];
            cheapDay = i+1; 
        }
    }

    printf("The best option to fly in the morning is on day %d\n\n", cheapDay);

    //evening
    for (int i = 0; i < 5; i++)
    {
        int j = 3;
        if (arr[i][j] == 1)
        {
            flightAvailE[i] = i+1;
        }           
    }
    printf("Evening Tickets:\n");
    for (int i = 0; i < 5; i++)
    {
        if (flightAvailE[i] >= 1)
        {
            printf("Ticket Available in the evening on Day %d\n", flightAvailE[i]);
        }
    }
    printf("\n");

    cheapTicket = arr[0][4];
    if (cheapTicket == 0)
    {
        cheapTicket = arr[1][4];
    }
    cheapDay = 1;

    for (int i = 0; i < 5; i++)
    {
        if ((arr[i][4]<cheapTicket) && (arr[i][4] != 0))
        {
            cheapTicket = arr[i][4];
            cheapDay = i+1; 
        }
    }

    printf("The best option to fly in the evening is on day %d\n\n", cheapDay);


    //nDay
    int mflag=0, eflag=0;

    printf("You selected: Day %d\n\n", nDay);
    for (int i = 0; i < 5; i++)
    {
        if (nDay == flightAvailM[i])
        {
            printf("Morning flight available on day %d. The price for this flight is: $%d\n", nDay, arr[i][2]);
            mflag=1;
            break;
        }
        else
        {
            mflag=0;
        }
    }

    if (mflag == 0)
    {
        printf("No morning flight available on day %d\n", nDay);
    }

    for (int i = 0; i < 5; i++)
    {
        if (nDay == flightAvailE[i])
        {
            printf("Evening flight available on day %d. The price for this flight is: $%d\n", nDay, arr[i][4]);
            eflag=1;
            break;
        }
        else
        {
            eflag=0;
        }
    }

    if (eflag == 0)
    {
        printf("No evening flight available on day %d\n", nDay);
    }
}
