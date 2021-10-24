
// flower.cpp - содержит функции обработки треугольника.

#include <stdio.h>
#include "../headers/flower.h"

// Ввод параметров треугольника из файла.
void In(flower &f, FILE *fileIn) {
    int t;
    fscanf(fileIn, "%d %d %d %d %d %d", &f.name, &f.length, &t);
    // Проверка на то, что координаты находятся на одной линии.
    switch (t) {
        case 0:
            f.type_ = flower::HOME;
            break;
        case 1:
            f.type_ = flower::GARDEN;
            break;
        case 2:
            f.type_ = flower::WILD;
            break;
        default:
            printf("Incorrect flower. Type cannot be"
                   " less than zero and larger than 2. "
                   "Flower will be randomly generated.\n");
            InRandom(f);
            break;
    }
}

// Случайный ввод параметров треугольника.
void InRandom(flower &f) {
    f.length = rand() % 10 + 2;
    f.name = RandomName(f.length);
    f.type_ = static_cast<flower::type>(rand() % 3);
}

void Type(flower &f, FILE *fOut) {
    switch (f.type_) {
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
void Out(flower &f, FILE *fileOut) {
    fprintf(fileOut,
            "It is Flower. Name: %s,",
            f.name);
    Type(f, fileOut);
    fprintf(fileOut, " Fraction = %f;\n", Fraction(f));
}

// Вычисление периметра треугольника.
double Fraction(flower &f) {
    int vowels_count = 0;
    for (int i = 0; i < f.length - 1; i++) {
        if (f.name[i] == 'a' || f.name[i] == 'e' || f.name[i] == 'i'
            || f.name[i] == 'o' || f.name[i] == 'u') {
            ++vowels_count;
        }
    }

    return 1.0 * vowels_count / (f.length - 1);
}
