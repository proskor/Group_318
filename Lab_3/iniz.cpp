#include "iniz.h"
#include <iostream>

// Объявление глобальной переменной
int my_value = 100;

auto iniz() -> int {
    int iValue = 25; // copy-initialization
    bool bValue (true); // direct-initialization
    char cValue {'M'}; // uniform-initialization
    auto lValue = 1567989665; // auto-initialization
    int my_value = 50; // Объявление локальной переменной
    std::cout << "Глобальная переменная: " << ::my_value << std::endl;
    std::cout << "Локальная переменная: "<< my_value << std::endl;
    return 0;
}
