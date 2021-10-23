#ifndef CSA_HW2_RANDOM_H
#define CSA_HW2_RANDOM_H

// random.h - содержит генератор случайных чисел в диапазоне от min до max.

#include <stdlib.h>

// Генерирует числа в диапазоне от min до max.
inline auto Random(int min, int max) {
    return rand() % (max - min) + min;
}
inline auto RandomName(int count) {
    char* name = new char[count];
    for (int i = 0; i < count - 1; i++) {
        name[i] = static_cast<char>(rand() % 25) + 'a';
    }
    name[count - 1] = '\0';
    return name;
}
#endif //CSA_HW2_RANDOM_H
