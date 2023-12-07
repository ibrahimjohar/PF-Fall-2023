#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Employee
{
    char name[50];
    char role[100];
    int communication;
    int teamwork;
    int creativity;
};

void shufflenames(char names[][20], int size);
void randomAssign(struct Employee employees[], char roles[][20], int nRoles);
int deptsum(struct Employee employees[]);
void printdepartment(struct Employee employees[]);
int randomorder(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

int main()
{
    struct Employee hr[5];
    struct Employee finance[5];
    struct Employee marketing[5];
    struct Employee logistics[5];

    char names[20][20] =
    {
        "Luke", "Robert", "Hemmings", "Ashton", "Fletcher", "Irwin", "Calum", "Thomas", "Hood", "Michael",
        "Gordon", "Clifford", "Ibrahim", "Johar", "Farooqi", "Hamza", "Ahmed", "Salaar", "Umer", "Luv"
    };

    char roles[5][20] = {"Director", "Executive", "Manager", "Employee", "Trainee"};

    shufflenames(names, 20);

    randomAssign(hr,roles,5);
    randomAssign(finance,roles,5);
    randomAssign(marketing,roles,5);
    randomAssign(logistics,roles,5);

    for(int i = 0; i < 5; i++)
    {
        strcpy(hr[i].name, names[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        strcpy(finance[i].name, names[i + 5]);
    }

    for(int i = 0; i < 5; i++)
    {
        strcpy(marketing[i].name, names[i + 10]);
    }

    for(int i = 0; i < 5; i++)
    {
        strcpy(logistics[i].name, names[i + 15]);
    }

    int sum_hr = deptsum(hr);
    int sum_finance = deptsum(finance);
    int sum_marketing = deptsum(marketing);
    int sum_logistics = deptsum(logistics);

    printf("Department Sums: \n");
    printf("HR: %d\n", sum_hr);
    printf("Finance: %d\n", sum_finance);
    printf("Marketing: %d\n", sum_marketing);
    printf("Logistics: %d\n", sum_logistics);

    printf("Best Department: ");
    if(sum_hr > sum_finance && sum_hr > sum_marketing && sum_hr > sum_logistics)
    {
        printf("HR\n");
        printdepartment(hr);
    }
    else if(sum_finance > sum_hr && sum_finance > sum_marketing && sum_finance > sum_logistics)
    {
        printf("Finance\n");
        printdepartment(finance);
    }
    else if(sum_marketing > sum_hr && sum_marketing > sum_finance && sum_marketing > sum_logistics)
    {
        printf("Marketing\n");
        printdepartment(marketing);
    }
    else if(sum_logistics > sum_hr && sum_logistics > sum_finance && sum_logistics > sum_marketing)
    {
        printf("Logistics\n");
        printdepartment(logistics);
    }

    return 0;
}


void shufflenames(char names[][20], int size)
{
    srand((unsigned int)time(NULL));

    for (int i = 0; i < size; i++)
    {
        int swap_index = rand() % size;
        char temp[20];
        strcpy(temp, names[i]);
        strcpy(names[i], names[swap_index]);
        strcpy(names[swap_index], temp);  // Corrected the swapping
    }

    /*
    //print test
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", names[i]);
    }
    */
}

void randomAssign(struct Employee employees[], char roles[][20], int nRoles)
{
    shufflenames(roles, nRoles);

    srand((unsigned int)time(NULL));

    for(int i = 0; i < 5; i++)
    {
        strcpy(employees[i].role, roles[i]);
        employees[i].communication = rand() % 100 + 1;
        employees[i].teamwork = rand() % 100 + 1;
        employees[i].creativity = rand() % 100 + 1;
    }
}

int deptsum(struct Employee employees[])
{
    int sum;
    for(int i = 0; i < 5; i++)
    {
        sum += employees[i].communication + employees[i].teamwork + employees[i].creativity;
    }
    return sum;
}

void printdepartment(struct Employee employees[])
{
    printf("%-20s%-30s%-20s%-20s%-20s\n", "Name", "Role", "Communication", "Teamwork", "Creativity");

    for(int i = 0; i < 5; i++)
    {
        printf("%-20s%-30s%-20d%-20d%-20d\n", employees[i].name, employees[i].role, employees[i].communication, 
        employees[i].teamwork, employees[i].creativity);
    }    
}
