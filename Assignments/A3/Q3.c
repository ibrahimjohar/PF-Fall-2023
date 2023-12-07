#include <stdio.h>

// Function to merge records from Personal.txt and Department.txt into Combine.txt
int mergerecord();

int main() {
    // File pointers for Personal.txt, Department.txt, and Combine.txt
    FILE *personal = fopen("Personal.txt", "a+");
    FILE *department = fopen("Department.txt", "a+");
    FILE *combine = fopen("Combine.txt", "a+");  // Open in append mode

    // Check if file opening was successful
    if (personal == NULL || department == NULL || combine == NULL) {
        printf("Unable to open files.\n");
    } else {
        // Call the mergerecord function
        mergerecord();
    }

    // Close the file pointers
    fclose(personal);
    fclose(department);
    fclose(combine);

    return 0;
}

// Function to merge records from Personal.txt and Department.txt into Combine.txt
int mergerecord()
{
    FILE *ptr1, *ptr2, *ptr3;
    int id;
    int salary;
    char name[50];

    // Open Personal.txt, Department.txt, and Combine.txt in append/update mode
    ptr1 = fopen("Personal.txt", "a+");
    ptr2 = fopen("Department.txt", "a+");
    ptr3 = fopen("Combine.txt", "a+");  // Open in append mode

    // Check if file opening was successful
    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL) {
        printf("Error opening one of the files\n");
        return 1;
    }

    // Input loop for Personal.txt
    do {
        printf("Enter -1 to exit this input\n");
        printf("Enter Employee ID: ");
        scanf("%d", &id);
        if (id != -1) {
            // Write ID to Personal.txt
            fprintf(ptr1, "%d\t", id);

            printf("Enter Employee name: ");
            getchar();  // Consume the newline character left by scanf
            fgets(name, sizeof(name), stdin);
            // Write name to Personal.txt
            fprintf(ptr1, "%s", name);
        }
    } while (id != -1);
    fclose(ptr1);

    // Input loop for Department.txt
    do {
        printf("Enter -1 to exit this input\n");
        printf("Enter salary: ");
        scanf("%d", &salary);
        if (salary != -1) {
            fprintf(ptr2, "%d\t", salary);

            printf("Enter ID: ");
            scanf("%d", &id);
            fprintf(ptr2, "%d\n", id);
        }
    } while (salary != -1);
    fclose(ptr2);

    // Open Personal.txt, Department.txt, and Combine.txt in read mode
    ptr1 = fopen("Personal.txt", "r");
    ptr2 = fopen("Department.txt", "r");
    ptr3 = fopen("Combine.txt", "a+");  // Open in append mode

    // Check if file opening was successful
    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL) {
        printf("Error opening one of the files\n");
        return 1;
    }

    // Merge records from Personal.txt and Department.txt into Combine.txt
    while (fscanf(ptr1, "%d %[^\n]", &id, name) != EOF && fscanf(ptr2, "%d %d", &salary, &id) != EOF) {
        // Write merged record to Combine.txt
        fprintf(ptr3, "%d, %s, %d\n", id, name, salary);
    }

    // Close the file pointers
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);

    // Open Combine.txt in read mode
    ptr3 = fopen("Combine.txt", "r");

    // Check if file opening was successful
    if (ptr3 == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    // Print the contents of Combine.txt
    char c;
    while ((c = fgetc(ptr3)) != EOF) {
        putchar(c);
    }

    // Close the file pointer
    fclose(ptr3);
    return 0;
}
