#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20
#define MAX_WORKERS 8
#define MAX_BONUSES 5
#define MAX_TILES 5

typedef struct
{
    int workerrefID;
    char workertitle[MAX_LENGTH];
    char affectedfrom[MAX_LENGTH];
} 
JobDetails;

typedef struct 
{
    int workerrefID;
    char bonusdate[MAX_LENGTH];
    int bonusAmount;
} 
Bonus;

typedef struct Worker
{
    int id;
    char firstname[MAX_LENGTH];
    char lastname[MAX_LENGTH];
    int salary;
    char joiningdate[MAX_LENGTH];
    char department[MAX_LENGTH];
}
 Worker;

Worker workers[MAX_WORKERS] = {
    {1, "Monika", "Arora", 10000, "2014-02-20 09:00:00", "HR"},
    {2, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
    {3, "Vishal", "Singhal", 60000, "2014-02-20 09:00:00", "HR"},
    {4, "Amitabh", "Singh", 500000, "2014-06-11 09:00:00", "Admin"},
    {5, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
    {6, "Vipul", "Diwan", 200000, "2014-06-11 09:00:00", "Account"},
    {7, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
    {8, "Geetka", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"},
};

Bonus bonuses[MAX_BONUSES] = {
    {1, "2016-02-20 00.00.00", 5000},
    {2, "2016-06-11 00:00:00", 3000},
    {3, "2016-02-20 00 00 00", 4000},
    {1, "2016-02-20 00:00:00", 4500},
    {2, "2016-06-11 00:00:00", 3500},
};

JobDetails title[MAX_WORKERS] = {
    {1, "Manager", "2016-02-20 00:00:00"},
    {2, "Executive", "2016-06-11 00:00:00"},
    {8, "Executive", "2016-06-11 00:00:00"},
    {5, "Manager", "2016-06-11 00:00:00"},
    {4, "Asst.Manager", "2016-06-11 00:00:00"},
    {7, "Executive", "2016-06-11 00:00:00"},
    {6, "Lead", "2016-06-11 00:00:00"},
    {3, "Lead", "2016-06-11 00:00:00"},
};

void max_salary() 
{
    int maxHR = -1, maxAD = -1, maxACC = -1;
    int idHR = -1, idAD = -1, idACC = -1;

    for (int i = 0; i < MAX_WORKERS; i++) 
    {
        if (strcmp(workers[i].department, "HR") == 0) 
        {
            if (workers[i].salary > maxHR) 
            {
                maxHR = workers[i].salary;
                idHR = i;
            }
        } 
        else if (strcmp(workers[i].department, "Admin") == 0) 
        {
            if (workers[i].salary > maxAD) 
            {
                maxAD = workers[i].salary;
                idAD = i;
            }
        } 
        else if (strcmp(workers[i].department, "Account") == 0) 
        {
            if (workers[i].salary > maxACC) 
            {
                maxACC = workers[i].salary;
                idACC = i;
            }
        }
    }

    if (idHR != -1) 
    {
        printf("Max Salary in HR: \n%d %s %s %d %s %s\n", workers[idHR].id, workers[idHR].firstname, workers[idHR].lastname, workers[idHR].salary, workers[idHR].joiningdate, workers[idHR].department);
    }

    if (idACC != -1)
    {
        printf("Max Salary in Account: \n%d %s %s %d %s %s\n", workers[idACC].id, workers[idACC].firstname, workers[idACC].lastname, workers[idACC].salary, workers[idACC].joiningdate, workers[idACC].department);
    }

    if (idAD != -1) 
    {
        printf("Max Salary in Admin: \n%d %s %s %d %s %s\n", workers[idAD].id, workers[idAD].firstname, workers[idAD].lastname, workers[idAD].salary, workers[idAD].joiningdate, workers[idAD].department);
    }
}

void total_salaries() 
{
    int totalHR = 0, totalACC = 0, totalAD = 0;

    for (int i = 0; i < MAX_WORKERS; i++) 
    {
        if (strcmp(workers[i].department, "HR") == 0) 
        {
            totalHR += workers[i].salary;
        } else if (strcmp(workers[i].department, "Account") == 0) 
        {
            totalACC += workers[i].salary;
        } else if (strcmp(workers[i].department, "Admin") == 0) 
        {
            totalAD += workers[i].salary;
        }
    }

    printf("Total Salaries:\nAdmin: %d\nAccount: %d\nHR: %d\n", totalAD, totalACC, totalHR);
}

int main() 
{
    max_salary();
    total_salaries();
    return 0;
}
