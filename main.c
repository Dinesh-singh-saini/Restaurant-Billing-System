#include<stdio.h>
#include<stdlib.h>

float calculate_bill(int quantity, float price) {
    float total = quantity * price;
    if (total >= 1000) {
        total = total * 0.9;
    }
    return total;
}

int main() {
    int choice, quantity;
    float price, total_bill = 0;
    char cont;

    printf("Welcome to our restaurant!\n");
    do {
        printf("1. Burger - ₹50.00\n2. Pizza - ₹200.00\n3. Sandwich - ₹50\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                price = 50.00;
                break;
            case 2:
                price = 200.00;
                break;
            case 3:
                price = 50;
                break;
            default:
                printf("Invalid choice!\n");
                continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        total_bill += calculate_bill(quantity, price);

        printf("Add another item? (y/n): ");
        scanf(" %c", &cont);

    } while (cont == 'y' || cont == 'Y');

    printf("Total bill: $%.2f\n", total_bill);

    return 0;
}
