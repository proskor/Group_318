/*
* Лабораторная работа №3
* Тема: “Исследование функций С++ в IDE (интегрированной среде разра-
* ботки) Qt Creator”
*
* Developer: Проскоряков Алексей
* OS: MacOS Sequoia 15.3.2
* locale (кодировка): UTF-8
*/

#include <iostream>
#include <iomanip>
// Подключение заголовочных файлов
#include "probability.h"
#include "printchar.h"
#include "iniz.h"
#include "animals.h"
#include "minmax.h"
#include "levels.h"

int main()
{
#define Unit 5

#if Unit == 1
    std::cout << "Задание 1" << std::endl;
    // Вызов функции задания 1 из отдельного файла (*.h ) или модуля (*.срр + *.h)
    std::cout << std::setprecision(2) << "Вероятность появления туза в колоде из 54 карт: " << aces_probability() << std::endl;
    std::cout << std::setprecision(2) << "Вероятность появления суммы выпавших очков 7 при броске игральных костей:  " << dice_probability() << std::endl;
    std::cout << std::setprecision(2) << "Вероятность появления слова МАМА из букв:  " << word_probability() << std::endl;

#elif Unit == 2
    std::cout << "Задание 2" << std::endl;
    // Вызов функции задания 2 из отдельного файла (*.h ) или модуля (*.срр + *.h)
    printChar('v', 'J', 'y', 'o');
    printChar('n', 't', 'M');
    printChar('k', 'G');
    printChar('s');
    printChar();

#elif Unit == 3
    std::cout << "Задание 3" << std::endl;
    // Вызов функции задания 3 из отдельного файла (*.h ) или модуля (*.срр + *.h)
    iniz();


#elif Unit == 4
    std::cout << "Задание 4" << std::endl;
    // Вызов функции задания 4 из отдельного файла (*.h ) или модуля (*.срр + *.h)
    getAnimalName(CAT);
    printNumberOfLegs(CAT);

#elif Unit == 5
    std::cout << "Задание 5" << std::endl;
    // Вызов функции задания 5 из отдельного файла (*.h ) или модуля (*.срр + *.h)
    min_max();

#elif Unit == 6
    std::cout << "Задание 6" << std::endl;
    int x; float y; double z; unsigned short k;

    // 1) неявное преобразование x (int к float), k (ushort к double) и итог к int
    int i = (x + y) * z + k;

    // 2) явное преобразование y (к double) и неявное х (к double) и итог к ushort
    k = static_cast<unsigned short>(x - static_cast<double>(y) / z);

    // 3) неявное преобразование x (к float), z (к float)
    z = (x * y) + (z / x);

    // 4) явное преобразование x (к float), неявное k (к float), итог у uint
    unsigned int ui = static_cast<unsigned int>(static_cast<float>(x) / y + k);

    // 5) явное преобразование x (к float) затем результат деления к int и итог к short
    short s = static_cast<short>(x % static_cast<int>(x / y));


    std::cout << z << std::endl;

#else
    std::cout << "Задание 7" << std::endl;
    // Вызов функции задания 7 из отдельного файла (*.h ) или модуля (*.срр + *.h)
    lift_app();
#endif
}
