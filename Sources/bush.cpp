
// bush.cpp - содержит процедуру ввода параметров для уже созданного прямоугольника.

#include <stdio.h>
#include "../headers/bush.h"

// Ввод параметров прямоугольника из файла.
void In(bush &b, FILE *fileIn) {
    int m;
    fscanf_s(fileIn, "%d %d %d", &b.name, &b.length, &m);

    switch (m) {
        case 0:
            b.month_ = bush::JANUARY;
            break;
        case 1:
            b.month_ = bush::FEBRUARY;
            break;
        case 2:
            b.month_ = bush::MARCH;
            break;
        case 3:
            b.month_ = bush::APRIL;
            break;
        case 4:
            b.month_ = bush::MAY;
            break;
        case 5:
            b.month_ = bush::JUNE;
            break;
        case 6:
            b.month_ = bush::JULY;
            break;
        case 7:
            b.month_ = bush::AUGUST;
            break;
        case 8:
            b.month_ = bush::SEPTEMBER;
            break;
        case 9:
            b.month_ = bush::OCTOBER;
            break;
        case 10:
            b.month_ = bush::NOVEMBER;
            break;
        case 11:
            b.month_ = bush::DECEMBER;
            break;
        default:
            printf("Incorrect bush. Month cannot be"
                   " less than zero and larger than 11. "
                   "Bush will be randomly generated.\n");
            InRandom(b);
            break;
    }
}

// Случайный ввод параметров прямоугольника.
void InRandom(bush &b) {
    b.length = rand() % 10 + 2;
    b.name = RandomName(b.length);
    b.month_ = static_cast<bush::month>(rand() % 12);
}

void Month(bush &b, FILE *fOut) {
    switch (b.month_) {
        case bush::JANUARY:
            fprintf(fOut, " Month: JANUARY ");
            break;
        case bush::FEBRUARY:
            fprintf(fOut, " Month: FEBRUARY ");
            break;
        case bush::MARCH:
            fprintf(fOut, " Month: MARCH ");
            break;
        case bush::APRIL:
            fprintf(fOut, " Month: APRIL ");
            break;
        case bush::MAY:
            fprintf(fOut, " Month: MAY ");
            break;
        case bush::JUNE:
            fprintf(fOut, " Month: JUNE ");
            break;
        case bush::JULY:
            fprintf(fOut, " Month: JULY ");
            break;
        case bush::AUGUST:
            fprintf(fOut, " Month: AUGUST ");
            break;
        case bush::SEPTEMBER:
            fprintf(fOut, " Month: SEPTEMBER ");
            break;
        case bush::OCTOBER:
            fprintf(fOut, " Month: OCTOBER ");
            break;
        case bush::NOVEMBER:
            fprintf(fOut, " Month: NOVEMBER ");
            break;
        case bush::DECEMBER:
            fprintf(fOut, " Month: DECEMBER ");
            break;
    }
}

// Вывод параметров прямоугольника в файл.
void Out(bush &b, FILE *fileOut) {
    fprintf(fileOut,
            "It is Bush. Name: %s,",
            b.name);
    Month(b, fileOut);
    fprintf(fileOut, " Fraction = %f;\n", Fraction(b));
}

// Вычисление периметра прямоугольника.
double Fraction(bush &b) {
    int vowels_count = 0;
    for (int i = 0; i < b.length - 1; i++) {
        if (b.name[i] == 'a' || b.name[i] == 'e' || b.name[i] == 'i'
            || b.name[i] == 'o' || b.name[i] == 'u') {
            ++vowels_count;
        }
    }

    return 1.0 * vowels_count / (b.length - 1);
}

