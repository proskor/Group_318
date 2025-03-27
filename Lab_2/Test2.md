## Задание 1

#### Неправильный код

'''cpp
nt main() {
short a;
a(65599);
int 5 = 4;
int л = 4;
char ch;
ch{5};
float f;
f = 3,2;
}}
'''

#### Правильный код

'''cpp
int main() {
int a;
a = 65599;
int t = 4;
int k = 4;
char ch;
ch = '5';
float f;
f = 3.2;
}

******

## Задание 2

#### а) Почему z выводит неожиданные значения?

'''cpp
#include <iostream>
int main() {
int x = 5;
x = x - 2;
//a
std::cout << x << std::endl; // #a
int y = x;
//b
std::cout << y << std::endl; // #b
//c
std::cout << x + y << std::endl; // #c
//d
std::cout << x << std::endl; // #d
int z;
//e
std::cout << z << std::endl; // #e
}
'''
**Результатом вывода будет 516 (как мусор из памяти), т.к. переменная z типа int определена, но не инициализирована значением.**

#### b)

'''cpp
 #include <iostream>
int main() {
int x = 1;
x = x++;
std::cout << x << "\n";
}
'''
**Результатом вывода будет 1, так как оператор итерации постфиксный и увеличивает значение уже после выполенения всего выражения**

### c)

  '''cpp
#include <iostream>
int main(){
int x = 1;
std::cout << ++x << "\n";
}
'''
 **Результатом вывода будет 2, так как оператор итерации префиксный и увеличивает значение до выполенения всего выражения**

  *****

## Задание 3

#### a)

#### Неправильный код

'''cpp
const int option_1 = 0;
const int option_2 = 1;
const int option_3 = 2;
const int option_4 = 3;
const int option_5 = 4;
const int option_6 = 5;
const int option_7 = 6;
const int option_8{7};
int main( {
bitset<8> bits(0x4);
bits.set(option_1);
bits.flip(option_3);
bits.reset(option_7);
cin << "Bit 1 has value: " << bits.test(option_1) << '/n';
cin << Bit 3 has value: " << bits.test() << '\n';
cin << "Bit 7 has value: " << bits.test() < '\n';
cin<< "All the bits: " << bits << '\n;
} 
'''

#### Правильный код

'''cpp
#include <iostream>
#include <bitset>
const int option_1 = 0;
const int option_2 = 1;
const int option_3 = 2;
const int option_4 = 3;
const int option_5 = 4;
const int option_6 = 5;
const int option_7 = 6;
const int option_8{7};
int main() {
    std::bitset<8>bits(0x4);
    bits.set(option_1);
    bits.flip(option_3);
    bits.reset(option_7);
    std::cout << "Bit 1 has value: " << bits.test(option_1) << '\n';
    std::cout << "Bit 3 has value: " << bits.test(option_3) << '\n';
    std::cout << "Bit 7 has value: " << bits.test(option_7) << '\n';
    std::cout << "All the bits: " << bits << '\n';
}
'''

#### b)

#### Неправильный код

'''cpp
int main()
uint8_t a(1), uint8_t b(1), c(3
a = a < 1;
printf("a: \n", a)
b <<= 1;
printf("b: \n", b);
c |= 1;
print("c: \n", );
'''    

#### Правильный код

'''cpp
#include <stdio.h>
#include <stdint.h>
int main(){
    uint8_t a(1);
    uint8_t b(1), c(3);
    a = a < 1;
    printf("a: %d \n", a);
    b <<= 1;
    printf("b: %d \n", b);
    c |= 1;
    printf("c: %d \n", c);
}    
'''

#### c)

#### Неправильный код

'''cpp
int main() {
int x (08);
std::cout << "x: " << x < endl;
int y = 0x5;
std::cout << "y: " < y << stdendl;
int bin(0);
bin = 0b101
out << "bin 0b101: " << bin << std::endl
}
'''    

#### Правильный код

'''cpp
#include <iostream>
int main() {
    int x (010);
    std::cout << "x: " << x << std::endl;
    int y = 0x5;
    std::cout << "y: " << y << std::endl;
    int bin(0);
    bin = 0b101;
    std::cout << "bin 0b101: " << bin << std::endl;
}    
'''

#### d)

#### Неправильный код

'''cpp  
int main() {
int x{8};
std::cout << "hex: " << h << x << ndl;
std::cout << "oct: " << o<< x << std::endl;
out << "dec: " << dec << x << std::endl;
} 
 ''' 

#### Правильный код

'''cpp  
#include <iostream>
int main() {
    int x{8};
    std::cout << "hex: " << std::hex << x << std::endl;
    std::cout << "oct: " << std::oct << x << std::endl;
    std::cout << "dec: " << std::dec << x << std::endl;
}    
 ''' 

*****

## Задание 4

#### a)

(true && true) || false                     -> true
(false && true) || true                     -> false
(false && true) || false || true      -> false
(5 > 6 || 4 > 3) && (7 > 8)                -> true
!(7 > 6 || 3 > 4)                                  -> false 

#### b) Ответ: 1

#### c) Ответ: 4

#### d) Ответ: 9

  *****
  
## Задание 5

 01001101 = (0*2^7 + 1*2^6 + 0*2^5 + 0*2^4 + 1*2^3 + 1*2^2 +  0*2^1 +1*2^0 ) = 77
