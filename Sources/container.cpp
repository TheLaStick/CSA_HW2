
// container.cpp - содержит функции обработки контейнера.

#include "../headers/container.h"

// Инициализация контейнера.
void container::Init() {
    len = 0;
}

// Очистка контейнера от элементов (освобождение памяти).
void container::Clear() {
    for (int i = 0; i < len; i++) {
        delete cont[i];
    }
    len = 0;
}

// Ввод содержимого контейнера из указанного файла.
void container::In(FILE *fileIn) {
    int key = 0;
    while (fscanf(fileIn, "%d", &key) != EOF) {
        if (len >= max_len) {
            printf("Container is full. Further additions are prohibited");
            break;
        } else if ((cont[len] = cont[len]->StaticIn(fileIn, key)) != nullptr) {
            len++;
        }
    }
}

// Случайный ввод содержимого контейнера.
void container::InRandom(int size) {
    while (len < size) {
        cont[len] = cont[len]->StaticInRandom();
        if (cont[len] != nullptr) {
            ++len;
        }
    }
}

// Вывод содержимого контейнера в указанный файл.
void container::Out(FILE *fileOut) {
    fprintf(fileOut, "Container has %d objects.\n", len);
    for (int i = 0; i < len; i++) {
        fprintf(fileOut, "%d: ", i);
        cont[i]->Out(fileOut);
    }
}

// Отчистка контейнера от фигур с периметром, меньшим среднего значаения.
void container::DeleteSort() {
    double sum_of_fractions = 0;
    for (int i = 0; i < len; i++) {
        sum_of_fractions += cont[i]->Fraction();
    }

    sum_of_fractions /= len;
    plant *new_cont[max_len];

    int plant_count = 0; // count of correct plants
    for (int i = 0; i < len; i++) {
        if (cont[i]->Fraction() >= sum_of_fractions) {
            new_cont[plant_count++] = cont[i];
        }
    }

    for (int i = 0; i < plant_count; i++) {
        cont[i] = new_cont[i];
    }
    len = plant_count;
}
