#include<stdio.h>

void addition(double a, double b) {
    printf("Addition = %.2f\n", a + b);
}

void subtraction(double a, double b) {
    printf("Subtraction = %.2f\n", a - b);
}

void multiplication(double a, double b) {
    printf("Multiplication = %.2f\n", a * b);
}

void division(double a, double b) {
    if (b != 0) {
        printf("Division = %.2f\n", a / b);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }
}

void displayMenu() {
    printf("----------------MENU----------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("------------------------------------\n");
}

int main() {
    int choice;
    double num1, num2;

    do {
        displayMenu();

        printf("Enter your choice : ");
        scanf("%d",&choice);

        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please select a valid option from the menu.\n");
            continue;
        }

        if (choice == 5) {
            printf("Exiting the program. Thank you!\n");
            break;
        }

        printf("Enter first number : ");
        scanf("%lf",&num1);
        printf("Enter second number : ");
        scanf("%lf",&num2);

        switch (choice) {
            case 1:
                addition(num1, num2);
                break;
            case 2:
                subtraction(num1, num2);
                break;
            case 3:
                multiplication(num1, num2);
                break;
            case 4:
                division(num1, num2);
                break;
        }

        printf("------------------------------------\n");


    } 
    while (1);
}
