#include "levels.h"
#include <iostream>

// Функция вывода названия этажа
void print_level(int level){
    switch (level) {
    case level_0:
        std::cout << "Парковка" << std::endl;
        break;
    case level_1:
        std::cout << "Холл" << std::endl;
        break;
    case level_2:
        std::cout << "Обувь" << std::endl;
        break;
    case level_3:
        std::cout << "Одежда" << std::endl;
        break;
    case level_4:
        std::cout << "Игровая зона" << std::endl;
        break;
    case level_5:
        std::cout << "Спортивные товары" << std::endl;
        break;
    case level_6:
        std::cout << "Фудкорт" << std::endl;
        break;
    case level_7:
        std::cout << "Кинотеатр" << std::endl;
        break;
    default:
        std::cout << "Такого этажа нет" << std::endl;
        break;
    }
}

// Функция которая принимает номер этажа от пользователя и запускает функцию print_level
int lift_app(){
    std::cout << "Добро пожаловать в наш торговый центр!" << std::endl;
    std::string get_level;
    while (get_level != "Да"){
        std::cout << "Для перемещения по этажам ТЦ, введите номер этажа. Если хотите покинуть ТЦ, введите \'Да(y))\': " << std::endl;
        std::cin >> get_level;
        if ((get_level == "да") || (get_level == "Да") || (get_level == "Y") || (get_level == "y")) {
            std::cout << "Вы вышли из торгового центра" << std::endl;
            break;
        }
        print_level(std::stoi(get_level));
    };
    return 0;
}
