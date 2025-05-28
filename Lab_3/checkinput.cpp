#include "checkinput.h"
#include <iostream>
#include <limits>

// сброс потока и очистка буфера
void clearInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Проверка ввода целого числа
int checkInt() {
    int number;
    while (true) {
        if ((std::cin >> number) && std::cin.get() == '\n') {
            return number;
        } else {
            clearInput();
            std::cerr << "Неверное значение. Попробуйте снова.\n";
        }
    }
}

// Проверка ввода числа с плавающей точкой
float checkFloat() {
    float number;
    while (true) {
        if ((std::cin >> number) && std::cin.get() == '\n') {
            return number;
        } else {
            clearInput();
            std::cerr << "Неверное значение. Попробуйте снова.\n";
        }
    }
}

// Проверка ввода числа с двойной точностью (double)
double checkDouble() {
    double number;
    while (true) {
        if ((std::cin >> number) && std::cin.get() == '\n') {
            return number;
        } else {
            clearInput();
            std::cerr << "Неверное значение. Попробуйте снова.\n";
        }
    }
}

// Проверка ввода числа ushort
unsigned short checkUShort() {
    unsigned short number;
    while (true) {
        if ((std::cin >> number) && std::cin.get() == '\n') {
            return number;
        } else {
            clearInput();
            std::cerr << "Неверное значение. Попробуйте снова.\n";
        }
    }
}


