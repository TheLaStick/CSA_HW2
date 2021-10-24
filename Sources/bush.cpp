
// bush.cpp - содержит процедуру ввода параметров для уже созданного прямоугольника.
#include <cstring>
#include <stdio.h>
#include "../headers/bush.h"

static char *readStr(FILE *file) {
    char local[128] = {0};
    fscanf(file, "%s", local);
    char *result = (char *) malloc(strlen(local));
    strcpy(result, local);

    return result;
}

// Ввод параметров прямоугольника из файла.
void bush::In(FILE *fileIn) {
    int m = 0;
    name = readStr(fileIn);
    fscanf(fileIn, "%d %d", &length, &m);

    switch (m) {
        case 0:
            month_ = bush::JANUARY;
            break;
        case 1:
            month_ = bush::FEBRUARY;
            break;
        case 2:
            month_ = bush::MARCH;
            break;
        case 3:
            month_ = bush::APRIL;
            break;
        case 4:
            month_ = bush::MAY;
            break;
        case 5:
            month_ = bush::JUNE;
            break;
        case 6:
            month_ = bush::JULY;
            break;
        case 7:
            month_ = bush::AUGUST;
            break;
        case 8:
            month_ = bush::SEPTEMBER;
            break;
        case 9:
            month_ = bush::OCTOBER;
            break;
        case 10:
            month_ = bush::NOVEMBER;
            break;
        case 11:
            month_ = bush::DECEMBER;
            break;
        default:
            printf("Incorrect bush. Month cannot be"
                   " less than zero and larger than 11. "
                   "Bush will be randomly generated.\n");
            InRandom();
            break;
    }
}

// Случайный ввод параметров прямоугольника.
void bush::InRandom() {
    length = rand() % 10 + 1;
    name = RandomName(length + 1);
    month_ = static_cast<bush::month>(rand() % 12);
}

void bush::Month(FILE *fOut) {
    switch (month_) {
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
void bush::Out(FILE *fileOut) {
    fprintf(fileOut,
            "It is Bush. Name: %s,",
            name);
    Month(fileOut);
    fprintf(fileOut, " Fraction = %f;\n", Fraction());
}

// Вычисление периметра прямоугольника.
double bush::Fraction() {
    int vowels_count = 0;
    for (int i = 0; i < length - 1; i++) {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i'
            || name[i] == 'o' || name[i] == 'u') {
            ++vowels_count;
        }
    }

    return 1.0 * vowels_count / length;
}

