/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 5 December 2023
*   Description:
                Question 2:
                Pioneers Limited corporation has 4 departments: HR, Finance, Marketing, Logistics. Each department consists of 5 employee’s roles/ positions with the following attributes: 
                Name, Role, Communication, Teamwork, Creativity. The values for communication, teamwork, and creativity should be between 1 and 100 (inclusive).
                Your program must use structures to implement the following:
                A) For each of the 4 departments, initialize the attributes of their employees randomly using the rand () function.
                    a. Create an initial pool of 20 names from which the names will be randomly assigned to each employee. A name cannot be repeated twice. 
                    b. Each department will have exactly the following roles: Director, Executive,Manager, Employee, Trainee. A role cannot be repeated twice in the same department.
                    The values for communication, teamwork, and creativity should be between 1 and 100 (inclusive), also randomly assigned.
                B) The retail company wants to give an award for “Best Department”. To find this out, you must compute the sum of values of each employee for all the departments.
                   Then compare these 4 sums with each other to find out the best department. Your program should output the sum for each department along with the winner of the award
                   of “Best Department”. You must print the Best Department details in the tabular form with all employees and their attributes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//declaration of employee structure
struct Employee
{
    char name[50];
    char role[100];
    int communication;
    int teamwork;
    int creativity;
};

//function prototypes
void shufflenames(char names[][20], int size); 
void randomAssign(struct Employee employees[], char roles[][20], int nRoles);
int deptsum(struct Employee employees[]);
void printdepartment(struct Employee employees[]);
void shuffleorder(int array[], int size);

int main()
{
    printf("Ibrahim Johar Farooqi (23K-0074)\n\n");
    //declaration of departments arrays within the employee structure
    struct Employee hr[5];
    struct Employee finance[5];
    struct Employee marketing[5];
    struct Employee logistics[5];

    //declaration of array of strings to store a pool of 20 names
    char names[20][20] =
    {
        "Luke", "Robert", "Hemmings", "Ashton", "Fletcher", "Irwin", "Calum", "Thomas", "Hood", "Michael",
        "Gordon", "Clifford", "Ibrahim", "Johar", "Farooqi", "Hamza", "Ahmed", "Salaar", "Umer", "Luv"
    };

    //declaration of array of strings to store department roles
    char roles[5][20] = {"Director", "Executive", "Manager", "Employee", "Trainee"};

    //function call to shuffle names
    shufflenames(names, 20);

    //function call to randomly shuffle roles in each department
    randomAssign(hr,roles,5);
    randomAssign(finance,roles,5);
    randomAssign(marketing,roles,5);
    randomAssign(logistics,roles,5);

    //loops to store names in each department
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

    //shuffling the order of the calculation of sums
    int dept_index[] = {0, 1, 2, 3};
    
    shuffleorder(dept_index, sizeof(dept_index)/sizeof(dept_index[0])); //function call to randomly shuffle order 
    
    //declare sum variables for each department 
    int sum_hr, sum_finance, sum_marketing, sum_logistics;
    if (dept_index[0]==0)
    {
        sum_finance = deptsum(finance);
        sum_marketing = deptsum(marketing);
        sum_logistics = deptsum(logistics);
        sum_hr = deptsum(hr);
    }
    else if(dept_index[0]==1)
    {
        sum_hr = deptsum(hr);
        sum_marketing = deptsum(marketing);
        sum_logistics = deptsum(logistics);
        sum_finance = deptsum(finance);
    }
    else if(dept_index[0]==2)
    {
        sum_hr = deptsum(hr);
        sum_finance = deptsum(finance);
        sum_logistics = deptsum(logistics);
        sum_marketing = deptsum(marketing);
    }
    else if(dept_index[0]==3)
    {
        sum_hr = deptsum(hr);
        sum_finance = deptsum(finance);
        sum_marketing = deptsum(marketing);
        sum_logistics = deptsum(logistics);
    }

    //print department sums
    printf("-----------------DEPARTMENT SUMS:----------------\n");
    printf("-------------------------------------------------\n");
    printf("---------------------HR: %d-----------------\n", sum_hr);
    printf("----------------Finance: %d-----------------\n", sum_finance);
    printf("--------------Marketing: %d-----------------\n", sum_marketing);
    printf("--------------Logistics: %d-----------------\n", sum_logistics);
    printf("-------------------------------------------------\n");
    printf("-------------------------------------------------\n");
    
    //determine best department and print it 
    printf("-------------BEST DEPARTMENT: ");
    if(sum_hr > sum_finance && sum_hr > sum_marketing && sum_hr > sum_logistics)
    {
        printf("HR-----------------\n");
        printdepartment(hr); //function call to print department
    }
    else if(sum_finance > sum_hr && sum_finance > sum_marketing && sum_finance > sum_logistics)
    {
        printf("Finance------------\n");
        printdepartment(finance); //function call to print department
    }
    else if(sum_marketing > sum_hr && sum_marketing > sum_finance && sum_marketing > sum_logistics)
    {
        printf("Marketing----------\n");
        printdepartment(marketing); //function call to print department
    }
    else if(sum_logistics > sum_hr && sum_logistics > sum_finance && sum_logistics > sum_marketing)
    {
        printf("Logistics----------\n");
        printdepartment(logistics); //function call to print department
    }
    return 0;
}//end main()

//function definition to randomly shuffle names
void shufflenames(char names[][20], int size)
{
    srand((unsigned int)time(NULL)); //use of srand

    for (int i = 0; i < size; i++)
    {
        int swap_index = rand() % size;
        char temp[20];
        //swapping based on randomly assigned 'swap_index'
        strcpy(temp, names[i]);
        strcpy(names[i], names[swap_index]);
        strcpy(names[swap_index], temp);  
    }

    /*
    //print test
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", names[i]);
    }
    */
   
}//end function shufflenames

//function definition for randomly assigning numbers to communication, teamwork and creativity between 1 and 100
void randomAssign(struct Employee employees[], char roles[][20], int nRoles)
{
    //shuffle roles
    shufflenames(roles, nRoles);

    srand((unsigned int)time(NULL));

    for(int i = 0; i < 5; i++)
    {
        strcpy(employees[i].role, roles[i]);
        //random assignment of numbers between 1 and 100
        employees[i].communication = rand() % 100 + 1;
        employees[i].teamwork = rand() % 100 + 1;
        employees[i].creativity = rand() % 100 + 1;
    }
}//end function randomAssign

//function definition to calculate the sum of points in each department
int deptsum(struct Employee employees[])
{
    int sum;
    for(int i = 0; i < 5; i++)
    {
        sum += employees[i].communication + employees[i].teamwork + employees[i].creativity;
    }
    return sum;
}//end function deptsum

//function definition to print a department and it's details
void printdepartment(struct Employee employees[])
{
    printf("---------------------------------------------------------------------------\n");
    printf("|%3c%-7s|%9s %5c|%15s%-2c|%11s%-2c|%12s%-2c|\n", ' ', "NAME", "ROLE", ' ', "COMMUNICATION", ' ', "TEAM WORK", ' ', "CREATIVITY", ' ');
    printf("---------------------------------------------------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("|%1c%-9s|%2c%-13s|%10d%-7c|%8d%-5c|%8d%-6c|\n", ' ', employees[i].name, ' ', employees[i].role, employees[i].communication, ' ',
               employees[i].teamwork, ' ', employees[i].creativity, ' ');
    }
    printf("---------------------------------------------------------------------------\n");
}//end function printdepartment

//function definition to randomly shuffle order inside an array
void shuffleorder(int array[], int size)
{
    srand((unsigned int)time(NULL));

    for(int i = size - 1; i > 0; i--)
    {
        int j = rand() % (i+1);
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp; 
    }
}//end function shuffleorder



