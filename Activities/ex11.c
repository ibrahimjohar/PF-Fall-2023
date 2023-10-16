#include <stdio.h>

int main()
{
    float hrRate, hrWorked;
    float salary = 0.000;

    printf("enter hours worked: ");
    scanf("%f", &hrWorked);
    printf("enter hourly rate: ");
    scanf("%f", &hrRate);

    char gender;
    printf("enter gender [m] or [f]: ");
    scanf(" %c", &gender);

    switch (gender)
    {
    case 'm':
        salary = hrRate * hrWorked;
        salary = salary * 1.05;
        if (salary < 10000)
        {
            salary = salary * 1.02;
            printf("Salary with bonus = %.3f", salary);
        }
        else 
        {
            printf("Salary with bonus = %.3f", salary);
        }
        break;
    case 'f':
        salary = hrRate * hrWorked;
        salary = salary * 1.10;
        if (salary < 10000)
        {
            salary = salary * 1.02;
            printf("Salary with bonus = %.3f", salary);
        }
        else 
        {
            printf("Salary with bonus = %.3f", salary);
        }
        break;
    default:
        break;
    }

}
