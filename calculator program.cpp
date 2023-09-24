/*Develop a calculator program that performs basic arithmetic Operations such 
as addition, subtraction, multiplication,and Division. 
Allow the user to input two numbers and choose an Operation to perform.*/
#include <iostream>
int main() {
    double num1, num2;
    char operation;

    std::cout << "Simple Calculator Program" << std::endl;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> operation;

    double result;
    
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error! Division by zero is not allowed." << std::endl;
                return 1; // Exit with an error code
            }
            result = num1 / num2;
            break;
        default:
            std::cout << "Invalid operation selected." << std::endl;
            return 1; // Exit with an error code
    }
    
    std::cout << "Result: " << result << std::endl;

    return 0;
}



