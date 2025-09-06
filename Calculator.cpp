// Simple Calculator in C

#include <stdio.h> // Include the standard input/output library for functions like printf and scanf

int main() {
    // Declare a character variable to store the operator (+, -, *, /)
    char operator;
    // Declare two double variables to store the two numbers (operands)
    double num1, num2;

    // Prompt the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    // Read the operator character from the user's input
    scanf(" %c", &operator);

    // Prompt the user to enter two numbers
    printf("Enter two operands: ");
    // Read the two numbers from the user's input
    scanf("%lf %lf", &num1, &num2);

    // The switch statement checks the value of the 'operator' variable
    switch (operator) {
        // Case for addition
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;

        // Case for subtraction
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;

        // Case for multiplication
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;

        // Case for division
        case '/':
            // Check if the second number (divisor) is zero to avoid an error
            if (num2 != 0.0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        // Default case for when the operator is not one of the above
        default:
            printf("Error! Operator is not correct.\n");
    }

    // Return 0 to indicate that the program executed successfully
    return 0;
}
