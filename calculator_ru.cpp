// === Start of code === //
#include <iostream>
int main() {

    // === Variables === //
    int firstNumber = 0;
    int secondNumber = 0;
    char operation = ' ';

    // === UI === //
    std::cout << "=== Калькулятор от Aeloris ===\n";
    std::cout << "+----------------------+\n";
    std::cout << "|   ВЫБЕРИ ДЕЙСТВИЕ    |\n";
    std::cout << "+----------------------+\n";
    std::cout << "  +  сложение\n";
    std::cout << "  -  вычитание\n";
    std::cout << "  *  умножение\n";
    std::cout << "  /  деление\n";
    std::cout << "Твой выбор: ";
    std::cin >> operation;

    // === Numbers === //
    std::cout << "Введите первое число: ";
    std::cin >> firstNumber;

    std::cout << "Введите второе число: ";
    std::cin >> secondNumber;

    // === Operations (if // else if // else) === //
    if (operation == '+') {
        std::cout << "Вы выбрали сложение. Результат: " << firstNumber + secondNumber << "\n";
    }
    else if (operation == '-') {
        std::cout << "Вы выбрали вычитание. Результат: " << firstNumber - secondNumber << "\n";
    }
    else if (operation == '*') {
        std::cout << "Вы выбрали умножение. Результат: " << firstNumber * secondNumber << "\n";
    }
    else if (operation == '/') {

        if (secondNumber == 0) {
            std::cout << "Ошибка: деление на ноль невозможно.\n";
        } else {
            std::cout << "Вы выбрали деление. Результат: " << firstNumber / secondNumber << "\n";
        }
    }
    else {
        std::cout << "Неизвестный символ: " << operation << ". Попробуй снова.\n";
    }

    // === End === //
    return 0;
}