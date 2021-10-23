#ifndef HW1_RECTANGLE_H
#define HW1_RECTANGLE_H

// bush.h - содержит описание прямоугольника.

#include "random.h"

// Прямоугольник.
struct bush {
    // Координаты левой верхней вершины.
    int x1, y1;
    // Координаты правой нижней вершины.
    int x2, y2;
};

// Ввод параметров прямоугольника из файла.
void In(bush &r, FILE *fileIn);

// Случайный ввод параметров прямоугольника.
void InRandom(bush &r);

// Вывод параметров прямоугольника в файл.
void Out(bush &r, FILE *fileOut);

// Вычисление периметра прямоугольника.
double Perimeter(bush &r);

#endif //HW1_RECTANGLE_H
