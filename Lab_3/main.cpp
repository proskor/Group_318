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
#include "transform.h"

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
    chooseAnimal();

#elif Unit == 5
    std::cout << "Задание 5" << std::endl;
    // Вызов функции задания 5 из отдельного файла (*.h ) или модуля (*.срр + *.h)
    min_max();

#elif Unit == 6
    std::cout << "Задание 6" << std::endl;
    trasnformation();

#else
    std::cout << "Задание 7" << std::endl;
    // Вызов функции задания 7 из отдельного файла (*.h ) или модуля (*.срр + *.h)
    lift_app();
#endif
}
