#include <stdio.h>  // Include standard input/output library
#include <stdlib.h> // Include library for exit() function
#include <stdbool.h> // Include library to use bool type

/**
 * Function to add two numbers
 * @param a: first number
 * @param b: second number
 * @return: sum of a and b
 */
double add(double a, double b) {
    return a + b;
}

/**
 * Function to subtract two numbers
 * @param a: minuend
 * @param b: subtrahend
 * @return: difference of a and b
 */
double subtract(double a, double b) {
    return a - b;
}

/**
 * Function to multiply two numbers
 * @param a: first factor
 * @param b: second factor
 * @return: product of a and b
 */
double multiply(double a, double b) {
    return a * b;
}

/**
 * Function to divide two numbers
 * @param a: dividend
 * @param b: divisor
 * @return: quotient of a and b, or -1 if division by zero
 */
double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return -1; // Return error code
    }
    return a / b;
}

/**
 * Function to calculate factorial of a number
 * @param n: non-negative integer
 * @return: factorial of n, or -1 for negative input
 */
long long calculateFactorial(int n) {
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return -1;
    }
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

/**
 * Function to check if a number is even
 * @param num: integer to check
 * @return: true if even, false otherwise
 */
bool isEven(int num) {
    return num % 2 == 0;
}

/**
 * Function to display the main menu
 */
void displayMenu() {
    printf("\nSimple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Factorial\n");
    printf("6. Check Even/Odd\n");
    printf("7. Exit\n");
    printf("Choose an option (1-7): ");
}

/**
 * Main function — entry point of the program
 */
int main() {
    int userChoice;           // Stores user's menu choice
    double firstNumber;       // First operand for arithmetic operations
    double secondNumber;      // Second operand for arithmetic operations
    int numberForFactorial;   // Number to calculate factorial
    int numberToCheck;        // Number to check for even/odd
    double result;            // Stores result of arithmetic operations
    long long factorialResult; // Stores factorial result
    bool continueProgram = true; // Flag to control program loop

    // Main program loop — runs until user chooses to exit
    while (continueProgram) {
        displayMenu(); // Show menu options
        scanf("%d", &userChoice); // Read user's choice

        switch (userChoice) {
            case 1:
                // Addition
                printf("Enter first number: ");
                scanf("%lf", &firstNumber);
                printf("Enter second number: ");
                scanf("%lf", &secondNumber);
                result = add(firstNumber, secondNumber);
                printf("Result: %.2f\n", result);
                break;

            case 2:
                // Subtraction
                printf("Enter first number: ");
                scanf("%lf", &firstNumber);
                printf("Enter second number: ");
                scanf("%lf", &secondNumber);
                result = subtract(firstNumber, secondNumber);
                printf("Result: %.2f\n", result);
                break;

            case 3:
                // Multiplication
                printf("Enter first number: ");
                scanf("%lf", &firstNumber);
                printf("Enter second number: ");
                scanf("%lf", &secondNumber);
                result = multiply(firstNumber, secondNumber);
                printf("Result: %.2f\n", result);
                break;

            case 4:
                // Division
                printf("Enter dividend: ");
                scanf("%lf", &firstNumber);
                printf("Enter divisor: ");
                scanf("%lf", &secondNumber);
                result = divide(firstNumber, secondNumber);
                if (result != -1) { // Check if division was successful
                    printf("Result: %.2f\n", result);
                }
                break;

            case 5:
                // Factorial calculation
                printf("Enter a non-negative integer: ");
                scanf("%d", &numberForFactorial);
                factorialResult = calculateFactorial(numberForFactorial);
                if (factorialResult != -1) { // Check if factorial was calculated
                    printf("Factorial of %d is %lld\n", numberForFactorial, factorialResult);
                }
                break;

            case 6:
                // Check even/odd
                printf("Enter an integer: ");
                scanf("%d", &numberToCheck);
                if (isEven(numberToCheck)) {
                    printf("%d is even.\n", numberToCheck);
                } else {
                    printf("%d is odd.\n", numberToCheck);
                }
                break;

            case 7:
                // Exit program
                printf("Exiting the calculator. Goodbye!\n");
                continueProgram = false; // Set flag to exit loop
                break;

            default:
                // Handle invalid input
                printf("Invalid choice. Please enter a number between 1 and 7.\n");
                break;
        }
    }

    return 0; // Successful program termination
}
