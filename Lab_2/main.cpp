/*
* Лабораторная работа №2
* Тема:Исследование типов данных, лексем в IDE (интегрированной среде разработки) QtCreator
*
* Developer:Проскоряков Алексей
* OS: MacOS Sequoia 15.3.2
* locale (кодировка): UTF-8
*/

#include <iostream> // Подключаем библиотеку ввода-вывода
#include <iomanip> // Подключаем библиотеку манипуляторов
#include <math.h> // Подключаем библиотеку математических функций


int main()
{
    using namespace std;
#if 0
    int Age, Height;
    float Weight;
    bool Gender;
    cout << "Задание 1" << endl;
    cout << "Калькулятор для расчета идеального веса" << endl;
    cout << "Введите возраст (полных лет) и нажмите Enter: ";
    cin >> Age;
    cout << "Введите вес (кг) и нажмите Enter:  ";
    cin >> Weight;
    cout << "Введите рост (см) и нажмите Enter:  ";
    cin >> Height;
    cout << "Если вы мужчина введите 1, если женщина 0 и нажмите Enter: ";
    cin >> Gender;
    cout << "Подсчет идеального веса: " << endl;

    // a - по формуле Брока
    float brokWeight =  Gender ? ((Height - 100) * 0.9) : ((Height - 100) * 0.85);
    // Gender ? brokWeight = (Height - 100) * 0.9 : brokWeight = (Height - 100) * 0.85;
    cout << "По формуле Брока ваш идеальный вес - " << brokWeight << " кг" << endl;

    // b - по индексу массы тела
    float meterHeight = static_cast <float> (Height) / 100; // явное преобразование роста из см (int) в метры (float)
    float imtWeight = Weight / pow (meterHeight,2); // вычисление имт
    cout << "Ваш индекс массы тела: " << setprecision(3) << imtWeight  << " - ";

    if (imtWeight < 16)
    {
        cout << "Выраженный дефицит массы" << endl;
    }
    else if ((imtWeight > 16) && (imtWeight < 18.5))
    {
        cout << "Недостаточная (дефицит) масса тела"<< endl;
    }
    else if ((imtWeight > 18.5) && (imtWeight < 25))
    {
        cout << "Норма"<< endl;
    }
    else if ((imtWeight > 25) && (imtWeight < 30))
    {
        cout << "Избыточная масса тела (предожирение)"<< endl;
    }
    else if ((imtWeight > 30) && (imtWeight < 35))
    {
        cout << "Ожирение первой степени"<< endl;
    }
    else if ((imtWeight > 35) && (imtWeight < 40))
    {
        cout << "Ожирение второй степени"<< endl;
    }
    else if (imtWeight > 40)
    {
        cout << "Ожирение третьей степени (морбидное)"<< endl;
    }
    else
    {
        cout << "Ошибка";
    }

    // с - по индексу массы тела с учетом возраста
    const string normaImtString = "Норма ИМТ с учетом возраста и пола - ";
    if (Gender)
    {
        if ((Age > 19) && (Age < 24)) {
          cout << normaImtString << "21,4" << endl;
        } else if ((Age > 25) && (Age < 34)) {
          cout << normaImtString << "21,6" << endl;
        } else if ((Age > 35) && (Age < 44)) {
            cout << normaImtString << "22,9" << endl;
        } else if ((Age > 45) && (Age < 54)) {
            cout << normaImtString << "25,8" << endl;
        } else if (Age > 55) {
            cout << normaImtString << "26,6" << endl;
        }
    } else {
        if ((Age > 19) && (Age < 24)) {
            cout << normaImtString << "19,5" << endl;
        } else if ((Age > 25) && (Age < 34)) {
            cout << normaImtString << "23,2" << endl;
        } else if ((Age > 35) && (Age < 44)) {
            cout << normaImtString << "23,4" << endl;
        } else if ((Age > 45) && (Age < 54)) {
            cout << normaImtString << "25,2" << endl;
        } else if (Age > 55) {
            cout << normaImtString << "27,3" << endl;
        }
    }
#endif

#if 0
    std::cout << "Задание 2" << std::endl;
    cout << "Размеры типов данных C++:\n";
    // Основные типы
    cout << "bool: " << sizeof(bool) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl << endl;

    // Основные типы с модификаторами длины и размера
    cout << "unsigned short: " << sizeof(unsigned short) << " bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "unsigned long: " << sizeof(unsigned long) << " bytes" << endl;
    cout << "unsigned long long: " << sizeof(unsigned long long) << " bytes" << endl;
    cout << "short int: " << sizeof(short int) << " bytes" << endl;
    cout << "long int: " << sizeof(long int) << " bytes" << endl;
    cout << "long long int: " << sizeof(long double) << " bytes" << endl;
    cout << "long double: " << sizeof(long double) << " bytes" << endl << endl;

    // Числовые диапазоны типа данных int
    cout << "Числовой диапазон int: " << endl;
    cout << "В десятичной системе от " << numeric_limits<int>::min() << " до " << numeric_limits<int>::max() << endl;
    cout << "В шестнадцатиричной системе от " << hex << numeric_limits<int>::min() << " до " << numeric_limits<int>::max() << endl;
    cout << "В восьмерчиной системе от " << oct << numeric_limits<int>::min() << " до " << oct << numeric_limits<int>::max() << endl;
    cout << "В двоичной системе от " << bitset<32>(numeric_limits<int>::min()) << " до " << bitset<32>(numeric_limits<int>::max()) << endl << endl;

    // Числовые диапазоны типа данных unsigned int
    cout << "Числовой диапазон unsigned int: " << endl;
    cout << "В десятичной системе от " << numeric_limits<unsigned int>::min() << " до " << numeric_limits<unsigned int>::max() << endl;
    cout << "В шестнадцатиричной системе от " << hex << numeric_limits<unsigned int>::min() << " до " << numeric_limits<unsigned int>::max() << endl;
    cout << "В восьмерчиной системе от " << oct << numeric_limits<unsigned int>::min() << " до " << oct << numeric_limits<unsigned int>::max() << endl;
    cout << "В двоичной системе от " << bitset<32>(numeric_limits<unsigned int>::min()) << " до " << bitset<32>(numeric_limits<unsigned int>::max()) << endl << endl;

    // Числовые диапазоны типа данных short
    cout << "Числовой диапазон unsigned short: " << endl;
    cout << "В десятичной системе от " << numeric_limits<short>::min() << " до " << numeric_limits<short>::max() << endl;
    cout << "В шестнадцатиричной системе от " << hex << numeric_limits<short>::min() << " до " << numeric_limits<short>::max() << endl;
    cout << "В восьмерчиной системе от " << oct << numeric_limits<short>::min() << " до " << oct << numeric_limits<short>::max() << endl;
    cout << "В двоичной системе от " << bitset<8>(numeric_limits<short>::min()) << " до " << bitset<8>(numeric_limits<short>::max()) << endl << endl;
#endif

#if 0
    cout << "Задание 3" << endl;
    cout << "Для расчета среднего арифметического введите 10 чисел (через Enter): " << endl;
    int counterNumbers = 0;
    float averageNumbers;
    float totalSum = 0;

    while (counterNumbers < 10)
    {
       cin >> averageNumbers;
       counterNumbers++;
       totalSum += averageNumbers;
    }
    cout << "Среднее арфиметическое: " << totalSum / 10 << endl;
    counterNumbers = 0;
    totalSum = 0;
#endif


#if 0
    cout << "Задание 4" << endl;
    cout << scientific << setprecision(2) << 34.50 << " (Значащих цифр - 3)" << endl;
    cout << scientific << setprecision(0) << 0.004000 << " (Значащих цифр - 1)" << endl;
    cout << scientific << setprecision(5) << 123.005 << " (Значащих цифр - 6)" << endl;
    cout << scientific << setprecision(2) << 146 * (pow(10,3)) << " (Значащих цифр - 3)" << endl;
#endif

#if 0
    cout << "Задание 5.1" << endl;
    cout << boolalpha << ((true && true) || false) << endl;
    cout << boolalpha << ((false && true) || true) << endl;
    cout << boolalpha << ((false && true) || false || true) << endl;
    cout << boolalpha << ((5 > 6 || 4 > 3) && (7 > 8)) << endl;
    cout << boolalpha << (!(7 > 6 || 3> 4)) << endl;
#endif

#if 0
    cout << "Задание 5.2" << endl;
    constexpr bool valueA = true;
    constexpr bool valueB = true;
    constexpr bool valueC = false;
    constexpr bool valueD = true;
    constexpr bool valueE = false;
    constexpr bool valueF = false;
    cout << boolalpha << ((valueA && valueB) || (!valueC) && (valueD || valueE)) << endl;
    cout << boolalpha << ((valueA && valueB) || (valueC && valueD) || (!valueE)) << endl;
    cout << boolalpha << ((valueA || valueB) && (valueC || valueD) && (valueE || valueF)) << endl;

    enum integerNums {
        NUMBER_A = 2,
        NUMBER_B = 4,
        NUMBER_C = 5,
        NUMBER_D = 1,
        NUMBER_E = 32,
        NUMBER_F = 55,
    };
    cout << boolalpha << ((NUMBER_A > NUMBER_B) && (NUMBER_C < NUMBER_D) && (NUMBER_E != NUMBER_F)) << endl;
#endif

#if 0
    cout << "Задание 5.3" << endl;
    bool var_A = true;
    bool var_B = false;
    bool firstExpressionMorgana = (!(var_A && var_B) == (!var_A) || (!var_B));
    bool secondExpressionMorgana = (!(var_A || var_B) == (!var_A) && (!var_B));
    cout << boolalpha << firstExpressionMorgana << endl;
    cout << boolalpha << secondExpressionMorgana << endl;
#endif

#if 0
    cout << "Задание 5.4" << endl;
    cout << "Введите целые числа x, y, z, v: " << endl;
    int x, y, z, v;
    cin >> x >> y >> z >> v;
    bool logicValue;
    x = 3 + 4 + 5; // Присваивание х нового значения
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    x = y = z; // Присваивание значения z переменным y, z
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    z *= ++y + 5; //  Умножение значения z на значение ((y+1) + 5);
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    logicValue = x || y && z || v;
    cout << boolalpha << "logicValue:" << logicValue << endl;
    // logicValue примет false если оба операнда логического "И" будут нулевые (0)
#endif

#if 0
    cout << "Задание 5.5" << endl;
    int digit, digitShift ;
    cout << "Введите число от 0 до 16: " << endl;
    cin >> digit;
    cout << "Введите число сдвига влево: " << endl;
    cin >> digitShift;
    digit <<= digitShift;
    cout <<"В десятичной системе: " << digit << endl;
    cout << hex <<  "В шестнадцатиричной системе: " << digit << endl;
    cout << oct << "В восьмеричной системе: " << digit << endl;
    cout << "В двоичной системе: " << bitset<8>(digit) << endl;
#endif

#if 0
    cout << "Задание 5.6" << endl;
/*
*    int res = a + b * 1 - 128/5;
*        Ассоциативность слева направо, Приоритет: умножени, деление, сложение, вычитание;
*    int res = a | b >> 1;
*        Ассоциативность слева направо, Приоритет: bitor, побитовый сдвиг вправо;
*    int res = a / b * k;
*        Ассоциативность слева направо, Приоритет: умножение, деление
*/
#endif


    return 0;
}



