#ifndef CSA_HW2_FLOWER_H
#define CSA_HW2_FLOWER_H

// flower.h - содержит описание треугольника.

# include "random.h"

// Треугольник.
class flower {
public:
    char* name; // flower name
    int length; // name lengths
    enum type {
        HOME,
        GARDEN,
        WILD
    };
    type type_;
};

// Ввод параметров треугольника из файла.
void In(flower &f, FILE *fileIn);

// Случайный ввод параметров треугольника.
void InRandom(flower &f);

// Вывод параметров треугольника в файл.
void Out(flower &f, FILE *fileOut);

// Вычисление периметра треугольника.
double Fraction(flower &f);

#endif //CSA_HW2_FLOWER_H
