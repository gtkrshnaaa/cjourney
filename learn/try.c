#include <stdio.h>

// Function for addition of two numbers
int add(int a, int b) {
    return a + b;
}

// Function for subtraction of two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function for multiplication of two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function for division of two numbers
float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Division by zero is not allowed!\n");
        return 0;
    }
}

int main() {
    int a, b, choice;
    
    // Menu for selecting operation
    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    // Ask for each number separately
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    // Conditional logic to perform the selected operation
    switch (choice) {
        case 1:
            printf("\nAddition result: %d\n", add(a, b));
            break;
        case 2:
            printf("\nSubtraction result: %d\n", subtract(a, b));
            break;
        case 3:
            printf("\nMultiplication result: %d\n", multiply(a, b));
            break;
        case 4:
            printf("\nDivision result: %.2f\n", divide(a, b));
            break;
        default:
            printf("\nInvalid choice!\n");
            break;
    }

    // Loop to ask if the user wants to continue
    char again;
    printf("\nDo you want to try again? (y/n): ");
    scanf(" %c", &again);  // Space before %c to clean up the buffer

    if (again == 'y' || again == 'Y') {
        main();  // Recursively call main() to restart the process
    } else {
        printf("\nThank you, the program has finished.\n");
    }
    
    return 0;
}
