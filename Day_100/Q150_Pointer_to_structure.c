/* Q150 (Pointers to Structures)
Use pointer to struct to modify and display data using -> operator. */

#include <stdio.h>

struct Book {
    int id;
    char title[100];
    float price;
};

void updatePrice(struct Book *b, float new_price) {
    b->price = new_price;
}

int main() {
    struct Book b1;
    struct Book *ptr = &b1;

    printf("Enter Book ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Book Title: ");
    scanf(" %99[^\n]", ptr->title);

    printf("Enter Book Price: ");
    scanf("%f", &ptr->price);

    printf("\n--- Original Book Details ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Title: %s\n", ptr->title);
    printf("Price: %.2f\n", ptr->price);

    float new_price;
    printf("\nEnter New Price to update: ");
    scanf("%f", &new_price);

    updatePrice(ptr, new_price);

    printf("\n--- Updated Book Details (via -> operator) ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Title: %s\n", ptr->title);
    printf("Price: %.2f\n", ptr->price);

    return 0;
}
