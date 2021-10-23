#ifndef HW1_TRIANGLE_H
#define HW1_TRIANGLE_H

// flower.h - содержит описание треугольника.

# include "random.h"

// Треугольник.
struct flower {
    // Координаты вершин.
    int x1, y1;
    int x2, y2;
    int x3, y3;
};

// Ввод параметров треугольника из файла.
void In(flower &t, FILE *fileIn);

// Случайный ввод параметров треугольника.
void InRandom(flower &t);

// Вывод параметров треугольника в файл.
void Out(flower &t, FILE *fileOut);

// Вычисление периметра треугольника.
double Perimeter(flower &t);

#endif //HW1_TRIANGLE_H
