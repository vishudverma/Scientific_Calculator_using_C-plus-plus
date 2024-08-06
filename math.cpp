#include <iostream>
#include <vector>
#include <cmath>

class Operations {
private:
    // Function to add two numbers used in arithmetic 
    double add(double num1, double num2) {
        return num1 + num2;
    }

    // Function to subtract two numbers used in arithmetic
    double subtract(double num1, double num2) {
        return num1 - num2;
    }

    // Function to multiply two numbers used in arithmetic
    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    // Function to divide two numbers used in arithmetic
    double divide(double num1, double num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Division by zero is not allowed." << std::endl;
            return 0;
        }
    }

    // Function to calculate square root  used in logarithmic function
    double root(double num) {
        if (num >= 0) {
            return std::sqrt(num);
        } else {
            std::cerr << "Error: Square root of negative number is not allowed." << std::endl;
            return 0;
        }
    }

    // Function to calculate power used in arithmetic
    double power(double base, double exponent) {
        return std::pow(base, exponent);
    }

    // Function to calculate natural logarithm used in logarithmic function
    double ln(double num) {
        if (num > 0) {
            return std::log(num);
        } else {
            std::cerr << "Error: Natural logarithm of non-positive number is not allowed." << std::endl;
            return 0;
        }
    }

    // Function to calculate logarithm to the base 10 used in logarithmic function
    double log10(double num) {
        if (num > 0) {
            return std::log10(num);
        } else {
            std::cerr << "Error: Logarithm to the base 10 of non-positive number is not allowed." << std::endl;
            return 0;
        }
    }

    // Function to calculate sine used in trigonometric function
    double sin(double angle) {
        return std::sin(angle);
    }

    // Function to calculate cosine used in trigonometric function
    double cos(double angle) {
        return std::cos(angle);
    }

    // Function to calculate tangent used in trigonometric function
    double tan(double angle) {
        return std::tan(angle);
    }

    // Function to calculate antilog used in logarithmic function
    double antilog(double base, double x=10) {
        return pow(base, x);
    }

    // Function to calculate absolute value
    double abs(double num) {
        return std::abs(num);
    }

    // Function to calculate exponential  used in logarithmic function
    double exp(double num) {
        return std::exp(num);
    }

    // Function to calculate factorial used in logarithmic function
    double factorial(int num) {
        if (num >= 0) {
            double result = 1;
            for (int i = 1; i <= num; i++) {
                result *= i;
            }
            return result;
        } else {
            std::cerr << "Error: Factorial of negative number is not allowed." << std::endl;
            return 0;
        }
    }

    // Function to perform arithmetic calculations
    void scientificCalculator(double num1, double num2, char operation) {
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
            case '^':
                std::cout << "Result: " << power(num1, num2) << std::endl;
                break;
            default:
                std::cerr << "Error: Invalid operation." << std::endl;
                break;
        }
    }

    // Function to perform trigonometric calculations
    void trigonometricCalculator(double angle, char operation) {
        switch (operation) {
            case 's':
                std::cout << "Result: " << sin(angle) << std::endl;
                break;
            case 'c':
                std::cout << "Result: " << cos(angle) << std::endl;
                break;
            case 't':
                std::cout << "Result: " << tan(angle) << std::endl;
                break;
            default:
                std::cerr << "Error: Invalid operation." << std::endl;
                break;
        }
    }

    // Function to perform logarithmic calculations
    void logarithmicCalculator(double num, char operation) {
        switch (operation) {
            case 'n':
                std::cout << "Result: " << ln(num) << std::endl;
                break;
            case 'l':
                std::cout << "Result: " << log(num) << std::endl;
                break;
            case 's':
                std::cout << "Result: " << root(num) << std::endl;
                break;
            case 'e':
                std::cout << "Result: " << exp(num) << std::endl;
                break;
            case 'f':
                std::cout << "Result: " << factorial(num) << std::endl;
                break;
            case 'a':
                std::cout << "Result: " << abs(num) << std::endl;
                break;
            case 'al':
                std::cout << "Result: " << antilog(num) << std::endl;
                // by default it takes base 10
                break;
            default:
                std::cout << "Error: Invalid operation." << std::endl;
        }
    }
};