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
    plant *s;
    // Генерируем число, которыму соответствует одна из фигур.
    auto key = rand() % 3 + 1;
    switch (key) {
        case 1:
            s = new plant;
            s->k = plant::TREE;
            InRandom(s->t);
            return s;
        case 2:
            s = new plant;
            s->k = plant::BUSH;
            InRandom(s->b);
            return s;
        case 3:
            s = new plant;
            s->k = plant::FLOWER;
            InRandom(s->f);
            return s;
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
    Color(s, fileOut);
}

// Вычисление периметра фигуры.
double Fraction(plant &p) {
    switch (p.k) {
        case plant::TREE:
            return Perimeter(p.t);
        case plant::BUSH:
            return Perimeter(p.b);
        case plant::FLOWER:
            return Perimeter(p.f);
        default:
            return 0.0;
    }
}
