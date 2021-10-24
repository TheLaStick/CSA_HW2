
// container.cpp - содержит функции обработки контейнера.

#include "../headers/container.h"

// Инициализация контейнера.
void Init(container &c) {
    c.len = 0;
}

// Очистка контейнера от элементов (освобождение памяти).
void Clear(container &c) {
    for (int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

// Ввод содержимого контейнера из указанного файла.
void In(container &c, FILE *fileIn) {
    int key = 0;
    while (fscanf_s(fileIn, "%d", &key) != EOF) {
        if (c.len >= c.max_len) {
            In(fileIn, key);
            c.len++;
        } else if ((c.cont[c.len] = In(fileIn, key)) != nullptr) {
            c.len++;
        }
    }
}

// Случайный ввод содержимого контейнера.
void InRandom(container &c, int size) {
    while (c.len < size) {
        c.cont[c.len] = InRandom();
        if (c.cont[c.len] != nullptr) {
            ++c.len;
        }
    }
}

// Вывод содержимого контейнера в указанный файл.
void Out(container &c, FILE *fileOut) {
    fprintf(fileOut, "Container has %d objects.\n", c.len);
    for (int i = 0; i < c.len; i++) {
        fprintf(fileOut, "%d: ", i);
        Out(*(c.cont[i]), fileOut);
    }
}

// Отчистка контейнера от фигур с периметром, меньшим среднего значаения.
void DeleteSort(container &c) {
    double sum_of_fractions = 0;
    for (int i = 0; i < c.len; i++) {
        sum_of_fractions += Fraction(*(c.cont[i]));
    }

    sum_of_fractions /= c.len;
    plant *new_cont;
    new_cont = new plant[c.max_len];

    int plant_count = 0; // count of correct plants
    for (int i = 0; i < c.len; i++) {
        if (Fraction(*(c.cont[i])) >= sum_of_fractions) {
            new_cont[plant_count++] = *(c.cont[i]);
        }
    }

    for (int i = 0; i < plant_count; i++) {
        *(c.cont[i]) = new_cont[i];
    }
    c.len = plant_count;
}
