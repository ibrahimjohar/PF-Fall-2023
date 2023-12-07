#include <stdio.h>

int mergerecord(); //function prototype 

int main()
{
    //file pointers declaration and initialisation
    FILE *personal = fopen("Personal.txt", "a+");
    FILE *department = fopen("Department.txt", "a+");
    FILE *combine = fopen("Combine.txt", "a+"); 

    //check for successful file opening
    if (personal == NULL || department == NULL || combine == NULL) {
        printf("Unable to open files.\n");
    } else {
        //calling mergerecord function
        mergerecord();
    }

    //closing files
    fclose(personal);
    fclose(department);
    fclose(combine);

    return 0;
}

//function definition to merge records from Personal.txt and Department.txt into Combine.txt
int mergerecord()
{
    //declaring file pointers
    FILE *ptr1, *ptr2, *ptr3;
    //declaring variables
    int id;
    int salary;
    char name[50];

    //opening Personal.txt, Department.txt, and Combine.txt in "a+" mode
    ptr1 = fopen("Personal.txt", "a+");
    ptr2 = fopen("Department.txt", "a+");
    ptr3 = fopen("Combine.txt", "a+"); 

    //check for successful file opening
    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL)
    {
        printf("Unable to open files.\n");
        return 1;
    }

    //inputs for Personal.txt
    do {
        printf("Enter -1 to exit this input\n");
        printf("Enter Employee ID: ");
        scanf("%d", &id);
        if (id != -1)
        {
            //writing ID to Personal.txt
            fprintf(ptr1, "%d\t", id);

            printf("Enter Employee name: ");
            getchar(); 
            fgets(name, sizeof(name), stdin);
            //writing name to Personal.txt
            fprintf(ptr1, "%s", name);
        }
    } while (id != -1);
    fclose(ptr1);//closing ptr1 file

    //inputs for Department.txt
    do {
        printf("Enter -1 to exit this input\n");
        printf("Enter salary: ");
        scanf("%d", &salary);
        if (salary != -1)
        {
            //writing Salary to Department.txt
            fprintf(ptr2, "%d\t", salary);

            printf("Enter ID: ");
            scanf("%d", &id);
            //writing ID to Department.txt
            fprintf(ptr2, "%d\n", id);
        }
    } while (salary != -1);
    fclose(ptr2);//closing ptr2 file

    //opening Personal.txt, Department.txt, and Combine.txt in "r" mode
    ptr1 = fopen("Personal.txt", "r");
    ptr2 = fopen("Department.txt", "r");
    ptr3 = fopen("Combine.txt", "a+");  

    //check for successful file opening
    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL)
    {
        printf("Unable to open files.\n");
        return 1;
    }

    //merging records from Personal.txt and Department.txt into Combine.txt
    while (fscanf(ptr1, "%d %[^\n]", &id, name) != EOF && fscanf(ptr2, "%d %d", &salary, &id) != EOF)
    {
        //writing the merged record to Combine.txt
        fprintf(ptr3, "%d, %s, %d\n", id, name, salary);
    }

    //closing files
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);

    //opening Combine.txt file for reading
    ptr3 = fopen("Combine.txt", "r");

    //check for successful file opening
    if (ptr3 == NULL)
    {
        printf("Unable to open files.\n");
        return 1;
    }

    //printing Combine.txt
    char c;
    while ((c = fgetc(ptr3)) != EOF)
    {
        putchar(c);
    }

    //closing ptr3 file
    fclose(ptr3);
    return 0;
}
