#include "animals.h"
#include <iostream>

void getAnimalName(int num_animal) {
    Animal animal = static_cast<Animal>(num_animal);
    switch (animal) {
    case PIG:
        std::cout << "Свинья" << std::endl;
        break;
    case CHICKEN:
        std::cout << "Курица" << std::endl;
        break;
    case GOAT:
        std::cout << "Коза" << std::endl;
        break;
    case CAT:
        std::cout << "Кошка" << std::endl;
        break;
    case DOG:
        std::cout << "Собака" << std::endl;
        break;
    default:
        std::cout << "Ошибка" << std::endl;
        break;
    }
}

void printNumberOfLegs(int num_animal){
    Animal animal = static_cast<Animal>(num_animal);
    switch (animal) {
    case PIG:
        std::cout << "4 лапы" << std::endl;
        break;
    case CHICKEN:
        std::cout << "2 лапы" << std::endl;
        break;
    case GOAT:
        std::cout << "4 лапы" << std::endl;
        break;
    case CAT:
        std::cout << "4 лапы" << std::endl;
        break;
    case DOG:
        std::cout << "4 лапы" << std::endl;
        break;
    default:
        std::cout << "Ошибка" << std::endl;
        break;
    }
}

void chooseAnimal(){
    int num_animal;
    std::cout << "Введите номер животного от 1 до 5: " << std::endl;
    std::cin >> num_animal;
    getAnimalName(num_animal);
    printNumberOfLegs(num_animal);
}
