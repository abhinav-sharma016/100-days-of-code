/* Q149 (Dynamic Structures)
Use malloc() to allocate structure memory dynamically and print details. */

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student *ptr;

    ptr = (struct Student *)malloc(sizeof(struct Student));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter Name: ");
    scanf(" %49[^\n]", ptr->name);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("\n--- Dynamically Allocated Student Details ---\n");
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    free(ptr);
    return 0;
}
