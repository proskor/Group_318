/*
* Лабораторная работа №1
* Установка и знакомство со средой разработки Qt Creator
* Исследование комментариев C++ в IDE Qt Creator
*
* Developer: Проскоряков Алексей
*/


#include <iostream> //Подключаем библиотеку ввода-вывода
#include <iomanip> //Подключаем библиотеку манипуляторов
using namespace std; //Подключаем пространство имен стандартной библиотеки STL

int main()
{

//Задание 1
#if 0
Номер группы 318, факультет ФДО
Разработчики: 1.Проскоряков Алексей
Номер лабораторной работы 1
#endif

    //Задание 2
    cout << setw(70) << "*****                    ТУСУР                    *****\n\n" << endl;
    cout << setw(90) << "Факультет: Доп. Образования" << endl;
    cout << setw(57) << "Группа: 318" << endl;
    cout << setw(94) << "Студент: Проскоряков Алексей\n" << endl;
    cout << setw(49) << "Томск 2025\n" << endl;
    //Размер файла Lab_1 debug: 65kb, release: 52kb

    //Задание 3
    // Задача №1
    float DistanceMovements, TimeMovements, SpeedMovements;
    cout << "Вычисление скорости прямолинейного движения: \n";
    cout << "Введите расстояние (в метрах) - ";
    cin >> DistanceMovements;
    cout << "Введите время (в секундах) - ";
    cin >> TimeMovements;
    SpeedMovements = DistanceMovements / TimeMovements;
    cout << "Скорость (м/с) = " << fixed << setprecision(2) << SpeedMovements << endl << endl;
    // Задача №2
    float StartAcceleration, EndAcceleration, TimeAcceleration, Acceleration;
    cout << "Вычисление ускорения: \n";
    cout << "Введите начальную скорость (м/с) - ";
    cin >> StartAcceleration;
    cout << "Введите конечную скорость (м/с) - ";
    cin >> EndAcceleration;
    cout << "Введите время (в секундах) - ";
    cin >> TimeAcceleration;
    Acceleration = (EndAcceleration - StartAcceleration) / TimeAcceleration;
    cout << "Ускорение = " << fixed << setprecision(2) << Acceleration << endl << endl;
    // Задача №3
    float LenghtCircle;
    double RadiusCircle;
    const double Pi = 3.141592653589793;
    cout << "Вычисление радиуса круга: \n";
    cout << "Введите длину окружности - ";
    cin >> LenghtCircle;
    RadiusCircle = LenghtCircle / (2*Pi);
    cout << " = " << fixed << setprecision(4) << RadiusCircle << endl << endl;
    return 0;
}


