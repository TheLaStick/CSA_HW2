#ifndef CSA_HW2_BUSH_H
#define CSA_HW2_BUSH_H

// bush.h - содержит описание прямоугольника.

#include "random.h"

// Прямоугольник.
class bush {
public:
    char* name; // bush name
    int length; // name len
    enum month {
        JANUARY = 0,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };
    month month_;
};

// Ввод параметров прямоугольника из файла.
void In(bush &b, FILE *fileIn);

// Случайный ввод параметров прямоугольника.
void InRandom(bush &b);

// Вывод параметров прямоугольника в файл.
void Out(bush &b, FILE *fileOut);

// Вычисление периметра прямоугольника.
double Fraction(bush &b);

#endif //HW1_RECTANGLE_H
