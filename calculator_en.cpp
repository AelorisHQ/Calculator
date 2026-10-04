// === Start of code === //
#include <iostream>
int main() {

    // === Variables === //
    int firstNumber = 0;
    int secondNumber = 0;
    char operation = ' ';

    // === UI === //
    std::cout << "=== Calculator by Aeloris ===\n";
    std::cout << "+----------------------+\n";
    std::cout << "|    Choose action     |\n";
    std::cout << "+----------------------+\n";
    std::cout << "  +  addition\n";
    std::cout << "  -  subtraction\n";
    std::cout << "  *  multiplication\n";
    std::cout << "  /  division\n";
    std::cout << "Your choice: ";
    std::cin >> operation;

    // === Numbers === //
    std::cout << "Enter first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter second number: ";
    std::cin >> secondNumber;

    // === Operations (if // else if // else) === //
    if (operation == '+') {
        std::cout << "You chose addition. Result: " << firstNumber + secondNumber << "\n";
    }
    else if (operation == '-') {
        std::cout << "You chose subtraction. Result: " << firstNumber - secondNumber << "\n";
    }
    else if (operation == '*') {
        std::cout << "You chose multiplication. Result: " << firstNumber * secondNumber << "\n";
    }
    else if (operation == '/') {

        if (secondNumber == 0) {
            std::cout << "Error: Division by zero is not allowed.\n";
        } else {
            std::cout << "You chose division. Result: " << firstNumber / secondNumber << "\n";
        }
    }
    else {
        std::cout << "Unknown symbol: " << operation << ". Please try again.\n";
    }

    // === End === //
    return 0;
}