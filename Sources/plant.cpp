// plant.cpp - содержит процедуры
// связанные с обработкой обобщенного растения
// и создания произвольного растения.

#include <stdio.h>
#include "../headers/plant.h"
#include "../headers/tree.h"
#include "../headers/bush.h"
#include "../headers/flower.h"

// Ввод параметров обобщенной фигуры из файла.
plant* plant::StaticIn(FILE *fileIn, int key) {
    plant *p;

    switch (key) {
        case 1:
            p = new tree;
            break;
        case 2:
            p = new bush;
            break;
        case 3:
            p = new flower;
            break;
        default:
            printf("Incorrect plant!\n");
            return nullptr;
    }

    p->In(fileIn);
    return p;
}

// Случайный ввод обобщенной фигуры.
plant* plant::StaticInRandom() {
    plant *p;
    // Генерируем число, которыму соответствует одна из фигур.
    auto key = rand() % 3 + 1;
    switch (key) {
        case 1:
            p = new tree;
            break;
        case 2:
            p = new bush;
            break;
        case 3:
            p = new flower;
            break;
        default:
            return nullptr;
    }
    p->InRandom();
    return p;
}