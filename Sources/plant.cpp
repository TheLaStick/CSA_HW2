// plant.cpp - содержит процедуры
// связанные с обработкой обобщенного растения
// и создания произвольного растения.

#include <stdio.h>
#include "../headers/plant.h"

// Ввод параметров обобщенной фигуры из файла.
plant *In(FILE *fileIn, int key) {
    plant *p;

    switch (key) {
        case 1:
            p = new plant();
            p->k = plant::TREE;
            In(p->t, fileIn);
            return p;
        case 2:
            p = new plant;
            p->k = plant::BUSH;
            In(p->b, fileIn);
            return p;
        case 3:
            p = new plant;
            p->k = plant::FLOWER;
            In(p->t, fileIn);
            return p;
        default:
            printf("Incorrect plant!\n");
            return nullptr;
    }
}

// Случайный ввод обобщенной фигуры.
plant *InRandom() {
    plant *p;
    // Генерируем число, которыму соответствует одна из фигур.
    auto key = rand() % 3 + 1;
    switch (key) {
        case 1:
            p = new plant;
            p->k = plant::TREE;
            InRandom(p->t);
            return p;
        case 2:
            p = new plant;
            p->k = plant::BUSH;
            InRandom(p->b);
            return p;
        case 3:
            p = new plant;
            p->k = plant::FLOWER;
            InRandom(p->f);
            return p;
        default:
            return nullptr;
    }
}

// Вывод параметров текущей фигуры в файл.
void Out(plant &s, FILE *fileOut) {
    switch (s.k) {
        case plant::TREE:
            Out(s.t, fileOut);
            break;
        case plant::BUSH:
            Out(s.b, fileOut);
            break;
        case plant::FLOWER:
            Out(s.f, fileOut);
            break;
        default:
            fprintf(fileOut, "Incorrect plant!\n");
            return;
    }
}

// Вычисление периметра фигуры.
double Fraction(plant &p) {
    switch (p.k) {
        case plant::TREE:
            return Fraction(p.t);
        case plant::BUSH:
            return Fraction(p.b);
        case plant::FLOWER:
            return Fraction(p.f);
        default:
            return 0.0;
    }
}
