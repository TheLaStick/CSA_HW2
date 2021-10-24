#ifndef CSA_HW2_CONTAINER_H
#define CSA_HW2_CONTAINER_H

// container.h - содержит тип данных, представляющий простейший контейнер.

#include <stdio.h>
#include "plant.h"

// Простейший контейнер на основе одномерного массива
class container {
public:
    enum {
        // Максимальная длина.
        max_len = 10000
    };
    // Текущая длина.`
    int len;
    plant *cont[max_len];
};

// Инициализация контейнера.
void Init(container &c);

// Очистка контейнера от элементов (освобождение памяти).
void Clear(container &c);

// Ввод содержимого контейнера из указанного файла.
void In(container &c, FILE *fileIn);

// Случайный ввод содержимого контейнера.
void InRandom(container &c, int size);

// Вывод содержимого контейнера в указанный файл.
void Out(container &c, FILE *fileOut);

// Отчистка контейнера от фигур с периметром, меньшим среднего значаения.
void DeleteSort(container &c);

#endif //CSA_HW2_CONTAINER_H
