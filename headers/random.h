#ifndef CSA_HW2_RANDOM_H
#define CSA_HW2_RANDOM_H

//------------------------------------------------------------------------------
// rnd.h - contains generator of random names with length from 1 to 10
//------------------------------------------------------------------------------

#include <stdlib.h>

// Generates numbers range from min to max
inline auto Random(int min, int max) {
    return rand() % (max - min) + min;
}

inline char* RandomName(int count) {
    char* name = new char[count];
    for (int i = 0; i < count - 1; i++) {
        name[i] = static_cast<char>(rand() % 25) + 'a';
    }
    name[count - 1] = '\0';
    return name;
}

#endif //CSA_HW2_RANDOM_H
