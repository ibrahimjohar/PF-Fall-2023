#include <stdio.h>

int main()
{
    int arr[100];
    int t, n, s1, s2;
    printf("t: ");
    scanf("%d", &t);
    printf("size of array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == t)
            {
                s1 = arr[i];
                s2 = arr[j];
                printf("(%d, %d) ", s1, s2);
            }
        }
    }
}
