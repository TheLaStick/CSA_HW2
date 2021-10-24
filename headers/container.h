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

// Инициализация контейнера.
    void Init();

// Очистка контейнера от элементов (освобождение памяти).
    void Clear();

// Ввод содержимого контейнера из указанного файла.
    void In(FILE *fileIn);

// Случайный ввод содержимого контейнера.
    void InRandom(int size);

// Вывод содержимого контейнера в указанный файл.
    void Out(FILE *fileOut);

// Отчистка контейнера от фигур с периметром, меньшим среднего значаения.
    void DeleteSort();
};

#endif //CSA_HW2_CONTAINER_H
