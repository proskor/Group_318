#include "minmax.h"
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
    int number_1, number_2, lim_min, lim_max;
    std::cout << "Введите первое число: ";
    std::cin >> number_1;
    std::cout << "Введите второе число: ";
    std::cin >> number_2;
    std::cout << "Введите минимальный порог: ";
    std::cin >> lim_min;
    std::cout << "Введите максимальный порог: ";
    std::cin >> lim_max;
    std::cout << "Максимум: " << maximum(number_1, number_2) << std::endl;
    std::cout << "Минимум: " << minimum(number_1, number_2) << std::endl;
    std::cout << "Максимум с порогом: " << maximum(number_1, number_2, lim_max) << std::endl;
    std::cout << "Минимум с порогом: " << minimum(number_1, number_2, lim_min) << std::endl;
    return 0;
}
