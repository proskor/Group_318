#include "minmax.h"
#include "checkinput.h"
#include <iostream>
#include <limits>

// Функция поиска максимума int
int maximum(int a, int b) {
    return (a > b) ? a : b;
}

// Функция поиска минимума int
int minimum(int a, int b) {
    return (a < b) ? a : b;
}

// Функция максимума unsigned short
unsigned short maximum(unsigned short a, unsigned short b) {
    return (a > b) ? a : b;
}

// Функция минимума unsigned short
unsigned short minimum(unsigned short a, unsigned short b) {
    return (a < b) ? a : b;
}

// Функция поиска максимума int с пределом
int maximum(int a, int b, int lim_max) {
    int result = maximum(a, b);
    return ((result > lim_max) ? lim_max : result);

}

// Функция поиска минимума int с пределом
int minimum(int a, int b, int lim_min) {
    int result = minimum(a, b);
    return ((result < lim_min) ? lim_min : result);

}

int min_max() {
    std::cout << "Введите первое число: ";
    int number_1 = checkInt();
    std::cout << "Введите второе число: ";
    int number_2 = checkInt();
    std::cout << "Введите минимальный порог: ";
    int lim_min = checkInt();
    std::cout << "Введите максимальный порог: ";
    int lim_max = checkInt();
    std::cout << "Максимум: " << maximum(number_1, number_2) << std::endl;
    std::cout << "Минимум: " << minimum(number_1, number_2) << std::endl;
    std::cout << "Максимум с порогом: " << maximum(number_1, number_2, lim_max) << std::endl;
    std::cout << "Минимум с порогом: " << minimum(number_1, number_2, lim_min) << std::endl;
    return 0;
}

