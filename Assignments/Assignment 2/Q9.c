#include <stdio.h>

int main()
{
    int n; 
    int arrIn[50][50];
    int arrOut[50][50];

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arrIn[i][j] = 0;
            arrOut[i][j] = 0;
        }
    }

    int num = 1;
    int l = 0, t = 0, r = n - 1, b = n-1;
    while (t<=b && l<=r)
    {
        for (int j = l; j <= r; j++)//left to right
        {
            arrIn[t][j] = num;
            num++;
        }
        t++;
        for (int i = t; i<=b; i++)//top to bottom
        {
            arrIn[i][r] = num;
            num++;
        }
        r--;
        
            for (int j = r; j >= l; j--)//right to left in bottom
            {
                arrIn[b][j] = num;
                num++;
            }
            b--;
        
        for (int i = b; i >= t; i--)//bottom left to top left
        {
            arrIn[i][l] = num;
            num++;
        }
        l++;
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arrIn[i][j]);
        }
        printf("\n");
    }

    num = n*n;
    t = 0, b = n - 1, l = 0, r = n - 1;

    while (t <= b && l <= r)
    {
        for (int j = r; j >= l; j--)
        {
            arrOut[t][j] = num;
            num--;
        }
        t++;
        for (int i = t; i <= b; i++)
        {
            arrOut[i][l] = num;
            num--;
        }
        l++;
        for (int j = l; j <= r; j++)
        {
            arrOut[b][j] = num;
            num--;
        }
        b--;
        for (int i = b; i >= t; i--)
        {
            arrOut[i][r] = num;
            num--;
        }
        r--;
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arrOut[i][j]);
        }
        printf("\n");
    }

}
