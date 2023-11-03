/*
*   Programmer: Ibrahim Johar Farooqi 
*   Date: 30 October 2023
*   Description: Q4:
                Write a C program to traverse the maze of 5 x 5 and find a path from the starting point to the exit.
                Constraints
                - There will be at least one path from the starting point to the exit. In case of more than one path then consider only one.
                - You can visit only right and down direction.
                - Output will be only indexes of correct path.
*/

#include <stdio.h>
#include <stdbool.h>

bool solve(char arr[][5], char temp[][5], int m, int n, int x, int y) {
    if (x < 0 || y < 0 || x >= m || y >= n || arr[x][y] == 'W' || temp[x][y] == '1')
        return false;

    temp[x][y] = '1';//Mark the current cell with '1' as part of the path

    if (arr[x][y] == 'E')
        return true;//Reached the exit position

    //Moving down and right
    if (solve(arr, temp, m, n, x + 1, y) || solve(arr, temp, m, n, x, y + 1))
        return true;

    //If none of the directions lead to the exit position, we will backtrack
    temp[x][y] = '0';
    return false;
}//end solve function


int main() {
    //declaration and initialisation of maze 2d array 
    char maze[5][5] = {
        {'S', 'O', 'O', 'W', 'W'},
        {'O', 'W', 'O', 'O', 'W'},
        {'O', 'O', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'E', 'W'} };

    char temp[5][5]; //declaration of temporaray 2d array to store the path 

    //initialise the temp array with 0
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            temp[i][j] = '0';
        }
    }
    
    if (solve(maze, temp, 5, 5, 0, 0)) //calling function 'solve'
    {
        printf("Output: ");
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (temp[i][j] == '1') //output the index positions at which vale has been set to 1 
                {
                    printf("(%d,%d) ", i, j);
                }
            }
        }
        printf("\n");    
    }
    else 
    {
        printf("No path found.\n"); //in case of no path formed
    }

    return 0;
}//end main()
