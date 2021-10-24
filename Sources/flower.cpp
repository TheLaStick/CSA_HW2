
// flower.cpp - содержит функции обработки треугольника.

#include <cstring>
#include <stdio.h>
#include "../headers/flower.h"

static char *readStr(FILE *file) {
    char local[128] = {0};
    fscanf(file, "%s", local);
    char *result = (char *) malloc(strlen(local));
    strcpy(result, local);

    return result;
}

// Ввод параметров треугольника из файла.
void flower::In(FILE *fileIn) {
    int t;
    name = readStr(fileIn);
    fscanf(fileIn, "%d %d", &length, &t);
    // Проверка на то, что координаты находятся на одной линии.
    switch (t) {
        case 0:
            type_ = flower::HOME;
            break;
        case 1:
            type_ = flower::GARDEN;
            break;
        case 2:
            type_ = flower::WILD;
            break;
        default:
            printf("Incorrect flower. Type cannot be"
                   " less than zero and larger than 2. "
                   "Flower will be randomly generated.\n");
            InRandom();
            break;
    }
}

// Случайный ввод параметров треугольника.
void flower::InRandom() {
    length = rand() % 10 + 1;
    name = RandomName(length + 1);
    type_ = static_cast<flower::type>(rand() % 3);
}

void flower::Type(FILE *fOut) {
    switch (type_) {
        case flower::HOME:
            fprintf(fOut, " Type: HOME,");
            break;
        case flower::GARDEN:
            fprintf(fOut, " Type: GARDEN,");
            break;
        case flower::WILD:
            fprintf(fOut, " Type: WILD,");
            break;

    }
}

// Вывод параметров треугольника в файл.
void flower::Out(FILE *fileOut) {
    fprintf(fileOut,
            "It is Flower. Name: %s,",
            name);
    Type(fileOut);
    fprintf(fileOut, " Fraction = %f;\n", Fraction());
}

// Вычисление периметра треугольника.
double flower::Fraction() {
    int vowels_count = 0;
    for (int i = 0; i < length - 1; i++) {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i'
            || name[i] == 'o' || name[i] == 'u') {
            ++vowels_count;
        }
    }

    return 1.0 * vowels_count / length;
}
