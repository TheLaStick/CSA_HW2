// tree.cpp - содержит функции обработки круга.

#include <stdio.h>
#include "../headers/tree.h"

// Ввод параметров круга из файла.
void In(tree &t, FILE *fileIn) {
    fscanf_s(fileIn, "%d %d %d", &t.name, &t.length, &t.age);
    // Проверка на то, что радиус меньше нуля.
    if (t.age < 0 || t.length <= 0) {
        printf("Incorrect tree. Age and len cannot be"
               " less than zero. Tree will be randomly generated.\n");
        InRandom(t);
    }
}

// Случайный ввод параметров круга.
void InRandom(tree &t) {
    t.length = rand() % 10 + 2;
    t.name = RandomName(t.length);

    // Генерируем положительное число - радиус круга.
    do {
        t.age = Random(0, 100);
    } while (t.age <= 0);
}

// Вывод параметров круга в файл.
void Out(tree &t, FILE *fileOut) {
    fprintf(fileOut,
            "It is tree. Name: %s,",
            t.name);
    fprintf(fileOut,
            " Age: %d,",
            t.age);
    fprintf(fileOut, " Fraction = %f;\n", Fraction(t));
}

// Вычисление периметра круга.
double Fraction(tree &t) {
    int vowels_count = 0;
    for (int i = 0; i < t.length - 1; i++) {
        if (t.name[i] == 'a' || t.name[i] == 'e' || t.name[i] == 'i'
            || t.name[i] == 'o' || t.name[i] == 'u') {
            ++vowels_count;
        }
    }

    return 1.0 * vowels_count / (t.length - 1);
}
