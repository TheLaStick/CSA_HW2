//------------------------------------------------------------------------------
// shape.cpp - contains procedures related to work with general plant
// and creating random plant
//------------------------------------------------------------------------------

#include <stdio.h>
#include "../headers/plant.h"
#include "../headers/tree.h"
#include "../headers/bush.h"
#include "../headers/flower.h"

//------------------------------------------------------------------------------
// General plant parameters input from file
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

// Random general plant input
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