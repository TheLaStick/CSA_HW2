#ifndef CSA_HW2_BUSH_H
#define CSA_HW2_BUSH_H

// bush.h - содержит описание прямоугольника.

#include "random.h"
#include "plant.h"

// Прямоугольник.
class bush : public plant {
public:
    virtual ~bush() {}

// Ввод параметров прямоугольника из файла.
    virtual void In(FILE *fileIn);

// Случайный ввод параметров прямоугольника.
    virtual void InRandom();

    void Month(FILE *fileOut);

// Вывод параметров прямоугольника в файл.
    virtual void Out(FILE *fileOut);

// Вычисление периметра прямоугольника.
    virtual double Fraction();

private:
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

#endif //CSA_HW2_BUSH_H
