// tree.cpp - содержит функции обработки круга.

#include <stdio.h>
#include <cstring>
#include "../headers/tree.h"

static char *readStr(FILE *file) {
    char local[128] = {0};
    fscanf(file, "%s", local);
    char *result = (char *) malloc(strlen(local));
    strcpy(result, local);

    return result;
}

// Ввод параметров круга из файла.
void tree::In(FILE *fileIn) {
    age = 0;
    name = readStr(fileIn);
    fscanf(fileIn, "%d %d", &length, &age);
    // Проверка на то, что радиус меньше нуля.
    if (age < 0 || length <= 0) {
        printf("Incorrect tree. Age and len cannot be"
               " less than zero. Tree will be randomly generated.\n");
        InRandom();
    }
}

// Случайный ввод параметров круга.
void tree::InRandom() {
    length = rand() % 10 + 1;
    name = RandomName(length + 1);

    // Генерируем положительное число - радиус круга.
    do {
        age = Random(0, 100);
    } while (age <= 0);
}

// Вывод параметров круга в файл.
void tree::Out(FILE *fileOut) {
    fprintf(fileOut,"It is tree. Name: %s,", name);
    fprintf(fileOut," Age: %d,", age);
    fprintf(fileOut, " Fraction = %f;\n", Fraction());
}

// Вычисление периметра круга.
double tree::Fraction() {
    int vowels_count = 0;
    for (int i = 0; i < length - 1; i++) {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i'
            || name[i] == 'o' || name[i] == 'u') {
            ++vowels_count;
        }
    }

    return 1.0 * vowels_count / length;
}
