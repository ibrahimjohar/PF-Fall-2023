/*
*   Programmer: Ibrahim Johar Farooqi
*   Description: Create a structure to specify data on students given below:
                 Roll number, Name, Department, Course, Year of joining Assume that there are not more than 450 students in the college.
                    ● Print names of all students who joined in a particular year.
                    ● Print the data of a student whose roll number is given.
*   Date: 21 November 2023
*/

#include <stdio.h>
#include <string.h>

int main()
{
    struct data
    {
        int rollno;
        char name[450];
        char dep[450];
        char course[450];
        int yearJoin;
    };
    
    int stdnum;
    printf("Enter the number of students: ");
    scanf("%d", &stdnum);
    
    if (stdnum > 450)
    {
        printf("Number of students exceeds the maximum limit.\n");
        return 1;
    }
    
    int yearCheck;
    printf("Enter Year to check students who joined in that year: ");
    scanf("%d", &yearCheck);
    int rollCheck;
    printf("Enter Roll No. to display student's data: ");
    scanf("%d", &rollCheck);

    struct data myData[450];

    for(int i=0; i<stdnum; i++)
    {
        printf("Enter student %d name: ", i+1);
        scanf("%s", myData[i].name);
        while (getchar() != '\n');
        printf("Enter student %d roll no: ", i+1);
        scanf("%d", &myData[i].rollno);
        while (getchar() != '\n');
        printf("Enter student %d department: ", i+1);
        fgets(myData[i].dep, sizeof(myData[i].dep), stdin);
        while (getchar() != '\n');
        printf("Enter student %d course: ", i+1);
        fgets(myData[i].course, sizeof(myData[i].course), stdin);
        while (getchar() != '\n');
        printf("Enter student %d's year of joining: ", i+1);
        scanf("%d", &myData[i].yearJoin);
        while (getchar() != '\n');
    }

    printf("\n");

    printf("Students who joined in %d are: \n", yearCheck);
    for(int i=0; i<stdnum; i++)
    {
        if (myData[i].yearJoin == yearCheck)
        {
            printf("%s\n", myData[i].name);
        }
    }
    
    printf("\n");

    for(int i = 0; i<stdnum; i++)
    {
        if (myData[i].rollno == rollCheck)
        {
            printf("Student Roll No.: %d\n", myData[i].rollno);
            printf("Student Name: %s\n", myData[i].name);
            printf("Student Department: %s\n", myData[i].dep);
            printf("Student Course: %s\n", myData[i].course);
            printf("Student's Year of Joining: %d\n", myData[i].yearJoin);
        }
    }
    
    return 0;
}
