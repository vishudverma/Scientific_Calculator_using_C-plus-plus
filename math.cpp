#include <iostream>
#include <vector>

// Function to add two numbers
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to subtract two numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to divide two numbers
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
        return 0;
    }
}

// Calculator function
void calculator(std::vector<double> numbers, char operation) {
    if (numbers.size() != 2) {
        std::cerr << "Error: Exactly two numbers are required for the operation." << std::endl;
        return;
    }

    double num1 = numbers[0];
    double num2 = numbers[1];

    switch (operation) {
        case '+':
            std::cout << "Result: " << add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << subtract(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << multiply(num1, num2) << std::endl;
            break;
        case '/':
            std::cout << "Result: " << divide(num1, num2) << std::endl;
            break;
        default:
            std::cerr << "Error: Invalid operation." << std::endl;
            break;
    }
}

int main() {
    std::vector<double> numbers = {10.5, 2.5};
    char operation = '+';

    calculator(numbers, operation);

    return 0;
}