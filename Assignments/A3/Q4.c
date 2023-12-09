/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 5 December 2023
*   Description: Question 4
*                a. Display the details of the workers having a maximum salary for each department.
*                b. Fetch departments along with the total salaries paid for each of them.
*/

#include <stdio.h>
#include <string.h>

//declaration of structure for Worker
struct Worker
{
    int workerid;
    char firstname[20];
    char lastname[20];
    int salary;
    char joiningdate[25];
    char department[20];
};

//declaration of structure for Bonus
struct Bonus
{
    int workerid;
    char bonusdate[25];
    int bonusamount;
};

//declaration of structure for Title
struct Title
{
    int workerid;
    char workertitle[20];
    char afftectedfrom[25];
};

//initialization of workers array
struct Worker workers[8] = 
{
    {1, "Monika", "Arora", 10000, "2014-02-20 09:00:00", "HR"},
    {2, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
    {3, "Vishal", "Singhal", 60000, "2014-02-20 09:00:00", "HR"},
    {4, "Amitabh", "Singh", 500000, "2014-06-11 09:00:00", "Admin"},
    {5, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
    {6, "Vipul", "Diwan", 200000, "2014-06-11 09:00:00", "Account"},
    {7, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
    {8, "Geetka", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"}
};

//initialization of bonuses array
struct Bonus bonuses[5] = 
{
    {1, "2016-02-20 00.00.00", 5000},
    {2, "2016-06-11 00:00:00", 3000},
    {3, "2016-02-20 00 00 00", 4000},
    {1, "2016-02-20 00:00:00", 4500},
    {2, "2016-06-11 00:00:00", 3500}
};

//initialization of titles array
struct Title titles[8] =
{
    {1, "Manager", "2016-02-20 00:00:00"},
    {2, "Executive", "2016-06-11 00:00:00"},
    {8, "Executive", "2016-06-11 00:00:00"},
    {5, "Manager", "2016-06-11 00:00:00"},
    {4, "Asst.Manager", "2016-06-11 00:00:00"},
    {7, "Executive", "2016-06-11 00:00:00"},
    {6, "Lead", "2016-06-11 00:00:00"},
    {3, "Lead", "2016-06-11 00:00:00"}
};

//function prototypes
void maxsalary();
void totalsalaries();

int main()
{
    printf("Programmer: Ibrahim Johar Farooqi\nStudent ID: 23K-0074\n\n");
    printf("Maximum Salary Individuals from each department:\n\n");
    maxsalary(); //call function to process and print maximum salary individuals from each department
    totalsalaries(); //call function to print total salaries of each department
}

//function definition to calculate maximum salary in a department
void maxsalary()
{
    //declaration and initialisation of variables to store the maximum salary of each department and it's respective id
    int max_hr = -1, max_account = -1, max_admin = -1;
    int id_hr = -1, id_account = -1, id_admin = -1;

    for (int i = 0; i < 8; i++)
    {
        if (strcmp(workers[i].department, "HR") == 0) //check if department is HR
        {
            if (workers[i].salary > max_hr)
            {
                max_hr = workers[i].salary;
                id_hr = i;
            }
        }
        else if (strcmp(workers[i].department, "Admin") == 0) //check if department is Admin
        {
            if (workers[i].salary > max_admin)
            {
                max_admin = workers[i].salary;
                id_admin = i;
            }
        }
        else if (strcmp(workers[i].department, "Account") == 0) //check if department is Account
        {
            if (workers[i].salary > max_account)
            {
                max_account = workers[i].salary;
                id_account = i;
            }            
        }
    }

    //print in tabular form
    if (id_hr != -1)  
    {
        printf("----------------------------------------------------------------------------\n");
        printf("|  %d  |  %s  |  %s  |  %d  |  %s  |     %s    |\n", workers[id_hr].workerid, workers[id_hr].firstname, workers[id_hr].lastname,
            workers[id_hr].salary, workers[id_hr].joiningdate, workers[id_hr].department);  
    }

    if (id_admin != -1)
    {
        printf("----------------------------------------------------------------------------\n");
        printf("|  %d  |  %s |  %s    |  %d |  %s  |   %s   |\n", workers[id_admin].workerid, workers[id_admin].firstname, workers[id_admin].lastname,
            workers[id_admin].salary, workers[id_admin].joiningdate, workers[id_admin].department);  
    }


    if (id_account != -1)
    {
        printf("----------------------------------------------------------------------------\n");
        printf("|  %d  |  %s   |  %s    |  %d |  %s  |  %s  |\n", workers[id_account].workerid, workers[id_account].firstname, workers[id_account].lastname,
            workers[id_account].salary, workers[id_account].joiningdate, workers[id_account].department);  
        printf("----------------------------------------------------------------------------\n\n");
    }
}//end function maxsalaries

//function definition to calculate the total salary of each department
void totalsalaries()
{
    int sum_hr = 0, sum_account = 0, sum_admin = 0; //declaration and initialization of variables to store totals of each dept's salaries
    for (int i = 0; i < 8; i++)
    {
        if (strcmp(workers[i].department, "HR") == 0) //sum for HR dept
        {
            sum_hr = sum_hr + workers[i].salary;
        }
        else if (strcmp(workers[i].department, "Account") == 0) //sum for Account dept
        {
            sum_account = sum_account + workers[i].salary;
        }
        else if (strcmp(workers[i].department, "Admin") == 0) //sum for Admin dept
        {
            sum_admin = sum_admin + workers[i].salary;
        }
    }

    //print the total salaries
    printf("The total salaries are:\nHR - %d\nAdmin - %d\nAccount - %d\n", sum_hr, sum_admin, sum_account);
}//end function totalsalaries

