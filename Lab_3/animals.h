#ifndef ANIMALS_H
#define ANIMALS_H

// Перечиление животных
enum Animal {
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG,
};

// Прототип функций вывода имени животного
void getAnimalName(Animal);
// Прототип функций вывода количества лап животного
void printNumberOfLegs(Animal);

#endif // ANIMALS_H
