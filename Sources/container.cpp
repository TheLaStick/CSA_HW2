//------------------------------------------------------------------------------
// container_Constr.cpp - contains functions of proccessing container
//------------------------------------------------------------------------------

#include "../headers/container.h"

//------------------------------------------------------------------------------
// Container initialization
void container::Init() {
    len = 0;
}

//------------------------------------------------------------------------------
// Clearing container from elements (clearing memory)
void container::Clear() {
    for (int i = 0; i < len; i++) {
        delete cont[i];
    }
    len = 0;
}

//------------------------------------------------------------------------------
// Inputting container content from stream
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

//------------------------------------------------------------------------------
// Random input of container content
void container::InRandom(int size) {
    while (len < size) {
        cont[len] = cont[len]->StaticInRandom();
        if (cont[len] != nullptr) {
            ++len;
        }
    }
}

//------------------------------------------------------------------------------
// Outputting container content from stream
void container::Out(FILE *fileOut) {
    fprintf(fileOut, "Container has %d objects.\n", len);
    for (int i = 0; i < len; i++) {
        fprintf(fileOut, "%d: ", i);
        cont[i]->Out(fileOut);
    }
}

//------------------------------------------------------------------------------
// Deleting some elements and container sort
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
