#ifndef CSA_HW2_CONTAINER_H
#define CSA_HW2_CONTAINER_H

//------------------------------------------------------------------------------
// container.h - contains data type
// featuring simplest container
//------------------------------------------------------------------------------

#include <stdio.h>
#include "plant.h"

//------------------------------------------------------------------------------
// Simple container based on one-dimensional array
class container {
public:
    enum {
        max_len = 10000
    };
    int len;
    plant *cont[max_len];

// Container initialization
    void Init();

// Clearing container from elements (clearing memory)
    void Clear();

// Inputting container content from stream
    void In(FILE *fileIn);

// Random input of container content
    void InRandom(int size);

// Outputting container content from stream
    void Out(FILE *fileOut);

// Deleting some elements and container sort
    void DeleteSort();
};

#endif //CSA_HW2_CONTAINER_H
