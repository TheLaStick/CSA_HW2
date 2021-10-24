#ifndef CSA_HW2_TREE_H
#define CSA_HW2_TREE_H

// tree.h - содержит описание дерева.

#include <cstdint>
#include "random.h"
#include "plant.h"

// Tree.
class tree: public plant {
public:
    ~tree() {}

// Ввод параметров круга из файла.
    virtual void In(FILE *fileIn);

// Случайный ввод параметров круга.
    virtual void InRandom();

// Вывод параметров круга в файл.
    virtual void Out(FILE *fileOut);

// Вычисление периметра круга.
    virtual double Fraction();
private:
    // tree age.
    int64_t age;
};

#endif //CSA_HW2_TREE_H
