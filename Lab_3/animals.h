#ifndef ANIMALS_H
#define ANIMALS_H

// Перечиление животных
enum Animal {
    PIG = 1,
    CHICKEN,
    GOAT,
    CAT,
    DOG,
};

// Прототип функций вывода имени животного
void getAnimalName(int);
// Прототип функций вывода количества лап животного
void printNumberOfLegs(int);
// Прототип функции выбора животного
void chooseAnimal();

#endif // ANIMALS_H
