/*
*   Programmer:
*   Date:
*   Description:Consider there are two structures: Employee (dependent structure) and another structure called Organization (Outer structure).
                The structure Organization has the data members like organisation_name,organisation_number.
                The Employee structure is nested inside the structure Organization and it has the data members like employee_id, name, salary.
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//structure definitions
struct Employee
{
    int employee_id;
    char name[15];
    int salary;
};

struct Organisation
{
    char organisation_name[50];
    char organisation_number[50];
    struct Employee emp; //nested structure
};

int main()
{
    struct Organisation org; //structure variable declaration

    //storing values
    org.emp.employee_id = 127;
    org.emp.salary = 400000;
    strcpy(org.emp.name, "Linus Sebastian");
    strcpy(org.organisation_name, "NU-Fast");
    strcpy(org.organisation_number, "NUFAST123ABC");

    //printing output of structure "Organisation"
    printf("The size of structure organization : %d\n", sizeof(struct Organisation));
    printf("Organisation Name: %s\n", org.organisation_name);
    printf("Organisation Number: %s\n", org.organisation_number);
    printf("Employee id: %d\n", org.emp.employee_id);
    printf("Employee Name: %s\n", org.emp.name);
    printf("Employee Salary: %d\n", org.emp.salary);
    
}//end main()

