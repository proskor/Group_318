## 3.1 Что выводят программы, если есть ошибки исправьте их:
### a)
#### Неправильный код
```cpp 
int return 5(){
return 5
}
int return8(){
return;
}
int main( {
std::cout << return5() + return8() << ;
return 0
}
```
#### Правильный код
```cpp
#include <iostream>

int return5(){
    return 5;
};

int return8(){
    return 8;
};

int main() {
std::cout << return5() + return8() << std::endl;
    return 0;
};

```
**Программа выведет число 13**

*****

### b)
#### Неправильный код
```cpp
int return() {
return 5;
int return()
{
int k ;
k{3};
return k;
}
}
int main(){
std::cout << return() <<
std::cout << return() <<
}
```


#### Правильный код
```cpp
#include <iostream>

int return5() {
    return 5;
};
int return_k() {
        int k;
        k = 3;
        return k;
};

int main(){
    std::cout << return5() << std::endl;
    std::cout << return_k() << std::endl;
};

```
**Программа выведет сначала число 5, затем число 3**

******

### с)
#### Неправильный код
```cpp
void prints
()
{
std::cout << 'O_o' << ;
}
int main ()
{
std::cout << prints() <<
return 0;
}
```

#### Правильный код
```cpp
#include <iostream>

void prints() {
    std::cout << "O_o" << std::endl;
}

int main ()
{
    prints();
    return 0;
}

```

**Программа выведет O_o**


******


### d)
#### Неправильный код
```cpp
int getNumbers()
{
return 6;
return;
}
int main()
{
std::cout << getNumbers(
std::cout << getNumbers)
std::cout << getNumbers
return 0;
}

```

#### Правильный код
```cpp
#include <iostream>

int getNumbers()
{
    return 6;
}

int main()
{
    std::cout << getNumbers();
    std::cout << getNumbers();
    std::cout << getNumbers();
    return 0;
}

```
**Программа выведет 666**

*****

### e)
#### Неправильный код
```cpp
int main()
{
std::cout << multiply(7, 8)

return 0;
}
void multiply(int a)
{
return a * b
}
int main() {
int x;
std::cin >> x;
constexpr y(x);
std::cout << y << std::endl;
return 0;
}

```

#### Правильный код
```cpp
#include <iostream>


int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    std::cout << multiply(7, 8);

    return 0;
}

int main_2()
{
    int x;
    std::cin >> x;
    const int y = x;
    std::cout << y << std::endl;
    return 0;
}
```
**Программа выведет 56**

*****

### f)
#### Неправильный код

```cpp
#define VALUE
int main() {
#if (VALUE == 0)
std::cout << VALUE <<"\n";
#elif (VALUE == 1)
std::cout << VALUE <<"\n";
#
elif
std::cout << VALUE <<"\n";
}
```

#### Правильный код
```cpp
#include <iostream>
#define VALUE 1

int main() {
if (VALUE == 0)
{
    std::cout << VALUE << '\n';
}
else if (VALUE == 1)
{
    std::cout << VALUE << '\n';
}
else
{
    std::cout << VALUE << '\n';
}
}

```
**Программа выведет 1**

*****

### g)
#### Неправильный код

```cpp
namespace Mix {
enum class Fruits {
LEMON,
APPLE
}
enum class Colors {
RED,
BLACK
}
};
int main() {
Fruits fruit = Fruits::LEMON;
std::cout << "MIX\n";
return 1;
}
```

#### Правильный код
```cpp
#include <iostream>


namespace Mix {

enum class Fruits {
    LEMON,
    APPLE,
};

enum class Colors {
    RED,
    BLACK,
};
}

int main() {
    Mix::Fruits fruit = Mix::Fruits::LEMON;
    std::cout << "MIX\n";
    return 1;
}

```
**Программа выведет MIX**

*****




### h)
#### Неправильный код

```cpp
namespace DoMath
{
int subtract(int x, int y)
{
return x , y;
}
namespace DoMath
{
int add(int x, int y)
{
return x | y;
}
}
}
auto main()
{
std::cout << DoMath::add(5, 4) << '\n';
std::cout << ::subtract(5, 4) << '\n';
return 0;
}
```

#### Правильный код
```cpp
#include <iostream>


namespace DoMath {

int subtract(int x, int y) {
    return x , y;
}
}

namespace DoMath{
int add(int x, int y)
{
    return x | y;
}
}

auto main() -> int
{
    std::cout << DoMath::add(5, 4) << '\n';
    std::cout << DoMath::subtract(5, 4) << '\n';
    return 0;
}

````
**Программа выведет сначала число 5, затем число 4**

******


## Задание 3.2
#### Неправильный код

```cpp 
int tmp 1;
int main() {
tmp 3;
std::cout << "Чтобы программа скомпилилась нужно что-то добавить а нельзя удалять
здесь пустые строки или
комментировать
<< std::endl;
return;
int getNumbers( {
int tmp = 1;
return;
}

```

#### Правильный код

```cpp
#include <iostream>

int tmp (1);

int main() {
    int tmp = 3;
    std::cout << "Глобальная переменная tmp: " << ::tmp << std::endl;
    std::cout << "Локальная переменная tmp: " << tmp << std::endl;
    std::cout << "zzz " << " \":)\" " <<"Чтобы программа скомпилилась нужно что-то добавить а нельзя удалять \n \
    здесь пустые строки или \n \
    комментировать!"
    << std::endl;
    return 0;
}

int getNumbers() {
    int tmp = 1;
    return tmp;
}
```
