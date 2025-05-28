#include "transform.h"
#include "checkinput.h"
#include <iostream>

void trasnformation(){
    std::cout << "Введите число типа int (x): ";
    int x = checkInt();
    std::cout << "Введите число типа float (y): ";
    float y = checkFloat();
    std::cout << "Введите число типа double (z): ";
    double z = checkDouble();
    std::cout << "Введите число типа ushort (k): ";
    unsigned short k = checkUShort();

    // 1) неявное преобразование x (int к float), k (ushort к double) и итог к int
    int i = (x + y) * z + k;
    std::cout << "int i = (x+y)*z+k \n" << "i= " << i << std::endl;

    // 2) явное преобразование y (к double) и неявное х (к double) и итог к ushort
    k = static_cast<unsigned short>(x - static_cast<double>(y) / z);
    std::cout << "k = x-y/z \n" << "k= " << k << std::endl;

    // 3) неявное преобразование x (к float), z (к float)
    z = (x * y) + (z / x);
    std::cout << "z = x*y+z/x \n" << "z= " << z << std::endl;;

    // 4) явное преобразование x (к float), неявное k (к float), итог у uint
    unsigned int ui = static_cast<unsigned int>(static_cast<float>(x) / y + k);
    std::cout << "unsigned int ui = x/y+k; \n" << "ui= " << ui << std::endl;

    // 5) явное преобразование x (к float) затем результат деления к int и итог к short
    short s = static_cast<short>(x % static_cast<int>(x / y));
    std::cout << "short s = x%(x/y)" << " s= " << s << std::endl;

}






