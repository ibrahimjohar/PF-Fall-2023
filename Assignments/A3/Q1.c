# include<stdio.h>
# include<stdlib.h>

//Creating a function to convert 8x8 array to 4x4 and then to 2x2:
void convertTo4x4(int EightbyEight[8][8], int FourbyFour[4][4], int TwobyTwo[2][2], int OnebyOne, int x) 
{
    int n = x / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
           int max = EightbyEight[2 * i][2 * j];

            if (EightbyEight[2 * i][2 * j + 1] > max)
            {
                max = EightbyEight[2 * i][2 * j + 1];
            }
            if (EightbyEight[2 * i + 1][2 * j] > max)
            {   
                max = EightbyEight[2 * i + 1][2 * j];
            }
            if (EightbyEight[2 * i + 1][2 * j + 1] > max)
            {
                max = EightbyEight[2 * i + 1][2 * j + 1];
            }
            FourbyFour[i][j] = max;
        }
    }
    //displaying the four by four array formed: 
    printf("\nThe 4 by 4 array formed is: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d\t", FourbyFour[i][j]);
        }
        printf("\n\n");
    }

    //using the convert to 2x2 function to convert 4x4 to 2x2:
    convertTo2x2(FourbyFour, TwobyTwo, OnebyOne, x/2);
}

//function for converting a 4x4 matrix ti 2x2: 
void convertTo2x2(int FourbyFour[4][4], int TwobyTwo[2][2], int OnebyOne, int x) 
{
    int y = x / 2;
    int max = FourbyFour[0][0];
    for (int i = 0; i<y; i++)
    {
        for(int j = 0; j<y; j++)
        {
            if(FourbyFour[i][j+1] > max)
            {
                max = FourbyFour[i][j+1];
            }
            if(FourbyFour[i+1][j] > max)
            {
                max = FourbyFour[i+1][j];
            }
            if(FourbyFour[i+1][j+1] > max)
            {
                max = FourbyFour[i+1][j+1];
            }
            
            TwobyTwo[i][j] = max;
        }
    }
    //displaying the 2 by 2 array formed:
    printf("\nThe 2 by 2 array formed is: \n");
    for(int i=0; i<y; i++)
    {
        for(int j=0; j<y; j++)
        {
            printf("%d\t", TwobyTwo[i][j]);
        }
        printf("\n\n");
    }

    convertTo1x1(TwobyTwo, OnebyOne, x);
}

//converting the 2x2 to 1x1 or finding the max element of 2x2:
void convertTo1x1(int TwobyTwo[2][2], int OnebyOne, int x)
{
    int max = TwobyTwo[0][0];
    for(int i = 0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
           if (TwobyTwo[i][j] > max) 
            {
                max = TwobyTwo[i][j];
            } 
        }
    }
    OnebyOne = max;
    printf("The max element of 2 by 2 array is: %d", OnebyOne);
}

int main()
{
    int x;
    int EightbyEight[8][8], FourbyFour[4][4], TwobyTwo[2][2], OnebyOne;

    //taking matrix size as input:
    printf("Input order of the square matrix (2, 4, or 8)\n");
    scanf("%d", &x);


    switch (x)
    {
        case 8:
           printf("Enter the elements of the matrix:\n");
           for (int i = 0; i < x; i++)
            {
              for (int j = 0; j < x; j++)
                {
                  printf("Input element [%d %d]: ", i + 1, j + 1);
                  scanf("%d", &EightbyEight[i][j]);
                }
            }
            convertTo4x4(EightbyEight, FourbyFour, TwobyTwo, OnebyOne, x);
            break;
            
        case 4:
           printf("Enter the elements of the matrix: \n");
           for(int i=0; i<x; i++)
            {
              for (int j = 0; j < x; j++)
                {
                  printf("Input element [%d %d]: ", i+1, j+1);
                  scanf("%d", &FourbyFour[i][j]);
                }
            }
            convertTo2x2(FourbyFour, TwobyTwo, OnebyOne, x);
            break;
            
        case 2:
           printf("Enter elements of the matrix: \n");
           for (int i = 0; i < x; i++)
            {
                for(int j=0; j<x; j++)
                {
                    printf("Input Element [%d %d]: ",i+1, j+1);
                    scanf("%d", &TwobyTwo[i][j]);
                }
            }
            convertTo1x1(TwobyTwo, OnebyOne, x);
            break;
            
        default:
          printf("Invalid order of matrix");
          break;
    }
    return 0;
}
