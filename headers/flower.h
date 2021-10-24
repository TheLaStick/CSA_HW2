#ifndef CSA_HW2_FLOWER_H
#define CSA_HW2_FLOWER_H

// flower.h - содержит описание треугольника.

# include "random.h"
# include "plant.h"

// Треугольник.
class flower: public plant {
public:
    virtual ~flower() {}

// Ввод параметров треугольника из файла.
    virtual void In(FILE *fileIn);

    void Type(FILE *fileOut);

// Случайный ввод параметров треугольника.
    virtual void InRandom();

// Вывод параметров треугольника в файл.
    virtual void Out(FILE *fileOut);

// Вычисление периметра треугольника.
    virtual double Fraction();
private:
    enum type {
        HOME,
        GARDEN,
        WILD
    };
    type type_;

};

#endif //CSA_HW2_FLOWER_H
