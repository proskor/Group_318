//Файл с функциями для вычисления вероятностей
#include "probability.h"

//Объявление констант
constexpr int cards_count = 54; //Количество карт в колоде
constexpr int aces_count = 4; //Количество тузов
constexpr int num_outcomes = 6; //Количество событий выпдаения суммы 7
constexpr int dice_sides = 6;  //Количество сторон игральной кости
constexpr int num_words = 16; //Количество всех возможных слов из букв М М А А
constexpr int num_words_outcomes = 4; //Количество составления слова МАМА

// Функция вычисления вероятности появления туза в колоде
float aces_probability(){
    return (static_cast<float>(aces_count)) / (static_cast<float>(cards_count));
}
// Функция вычисления вероятности появления 7 в результате броска двух игральных костей
float dice_probability(){
    return (static_cast<float>(num_outcomes)) / static_cast<float>(dice_sides * dice_sides);
}
// Функция вычисления вероятности появления слова МАМА из букв А,А,М,М
float word_probability(){
    return static_cast<float>(num_words_outcomes) / static_cast<float>(num_words);
}
