#ifndef CSA_HW2_TREE_H
#define CSA_HW2_TREE_H

// tree.h - содержит описание дерева.

#include <cstdint>
#include "random.h"

// Tree.
class tree {
public:
    // tree name.
    char* name;
    int length;
    // tree age.
    int64_t age;
};

// Ввод параметров круга из файла.
void In(tree &t, FILE *fileIn);

// Случайный ввод параметров круга.
void InRandom(tree &t);

// Вывод параметров круга в файл.
void Out(tree &t, FILE *fileOut);

// Вычисление периметра круга.
double Perimeter(tree &t);

#endif //CSA_HW2_TREE_H
