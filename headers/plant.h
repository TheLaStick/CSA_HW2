#ifndef CSA_HW2_PLANT_H
#define CSA_HW2_PLANT_H

// plant.h - содержит описание обобщающего растения.

#include "random.h"

// Структура, обобщающая все имеющиеся растения
class plant {
    // Значения ключей для каждой из фигур.
protected:
    char* name;
    int length;

public:
    virtual ~plant() {};

// Ввод обобщенной фигуры.
    static plant* StaticIn(FILE *fileIn, int key);

    virtual void In(FILE *fileIn) = 0;

// Случайный ввод обобщенной фигуры.
    static plant* StaticInRandom();

    virtual void InRandom() = 0;

// Вывод обобщенной фигуры.
    virtual void Out(FILE *fileOut) = 0;

// Вычисление периметра обобщенной фигуры.
    virtual double Fraction() = 0;

};
#endif //CSA_HW2_PLANT_H
