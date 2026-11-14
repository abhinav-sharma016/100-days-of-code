/* Q147 (File Handling with Structures)
Store employee data in a binary file using fwrite() and read using fread(). */

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Employee Name: ");
    scanf(" %49[^\n]", e1.name);

    printf("Enter Salary: ");
    scanf("%f", &e1.salary);

    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData written to employee.bin successfully.\n");

    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Read From Binary File ---\n");
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
