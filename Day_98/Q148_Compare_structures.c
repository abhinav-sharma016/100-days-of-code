/* Q148 (Structures)
Take two structs as input and check if they are identical. */

#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int areIdentical(struct Student s1, struct Student s2) {
    if (s1.roll_no == s2.roll_no &&
        strcmp(s1.name, s2.name) == 0 &&
        s1.marks == s2.marks) {
        return 1;
    }
    return 0;
}

int main() {
    struct Student s1, s2;

    printf("Enter Student 1 Roll, Name, Marks:\n");
    scanf("%d", &s1.roll_no);
    scanf(" %49[^\n]", s1.name);
    scanf("%f", &s1.marks);

    printf("Enter Student 2 Roll, Name, Marks:\n");
    scanf("%d", &s2.roll_no);
    scanf(" %49[^\n]", s2.name);
    scanf("%f", &s2.marks);

    if (areIdentical(s1, s2)) {
        printf("\nResult: Both student records are IDENTICAL.\n");
    } else {
        printf("\nResult: Student records are NOT identical.\n");
    }

    return 0;
}
