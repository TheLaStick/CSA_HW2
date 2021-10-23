#ifndef CSA_HW2_PLANT_H
#define CSA_HW2_PLANT_H

// plant.h - содержит описание обобщающего растения.

#include "tree.h"
#include "bush.h"
#include "flower.h"

// Структура, обобщающая все имеющиеся растения
class plant {
    // Значения ключей для каждой из фигур.
public:
    enum key {
        TREE, BUSH, FLOWER
    };
    // Ключ.
    key k;

    union {
        tree t;
        bush b;
        flower f;
    };
};

// Ввод обобщенной фигуры.
plant *In(FILE *fileIn, int key);

// Случайный ввод обобщенной фигуры.
plant *InRandom();

// Вывод обобщенной фигуры.
void Out(plant &p, FILE *fileOut);

// Вычисление периметра обобщенной фигуры.
double Fraction(plant &p);

#endif //CSA_HW2_PLANT_H
