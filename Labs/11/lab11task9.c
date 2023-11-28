/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 22 November 2023
*   Description: You need to implement the following 2 struct.
                    struct Student{}; struct Register{};
                    Student contains attributes StudentId, FirstName, LastName, cellno, email.
                    Register contains the attributes CourseId, CourseName.
                    Now you need to inherit the Register struct in Student struct. It means that the student struct holds the
                    variable of Register struct variable. After that you need to take input for 5 students and then print them
                    [Hint: Declare array of struct Student std[5]; for 5 students ]
*/


#include <stdio.h>
#include <string.h>


struct Register {
    int CourseId;
    char CourseName[50];
};


struct Student {
    int StudentId;
    char FirstName[50];
    char LastName[50];
    char cellno[15];
    char email[50];
    struct Register reg;
};
int main() {
    struct Student std[5];
int i = 0;
    for (i = 0; i < 5; ++i) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("StudentId: ");
        scanf("%d", &std[i].StudentId);

        printf("FirstName: ");
        scanf("%s", std[i].FirstName);

        printf("LastName: ");
        scanf("%s", std[i].LastName);

        printf("Cell Number: ");
        scanf("%s", std[i].cellno);

        printf("Email: ");
        scanf("%s", std[i].email);

        printf("CourseId: ");
        scanf("%d", &std[i].reg.CourseId);

        printf("CourseName: ");
        scanf("%s", std[i].reg.CourseName);

        printf("\n");
    }

    printf("Details of 5 students:\n");
    for (i = 0; i < 5; ++i) {
        printf("Student %d:\n", i + 1);
        printf("StudentId: %d\n", std[i].StudentId);
        printf("FirstName: %s\n", std[i].FirstName);
        printf("LastName: %s\n", std[i].LastName);
        printf("Cell Number: %s\n", std[i].cellno);
        printf("Email: %s\n", std[i].email);
        printf("CourseId: %d\n", std[i].reg.CourseId);
        printf("CourseName: %s\n\n", std[i].reg.CourseName);
    }

    return 0;
}
