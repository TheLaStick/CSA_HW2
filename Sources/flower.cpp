//------------------------------------------------------------------------------
// flower.cpp - contains parameters input proccess
// for already made flower
//------------------------------------------------------------------------------

#include <cstring>
#include <stdio.h>
#include "../headers/flower.h"

static char *readStr(FILE *file) {
    char local[128] = {0};
    fscanf(file, "%s", local);
    char *result = (char *) malloc(strlen(local));
    strcpy(result, local);

    return result;
}

// Flower parameters input from file
void flower::In(FILE *fileIn) {
    int t;
    name = readStr(fileIn);
    fscanf(fileIn, "%d %d", &length, &t);

    switch (t) {
        case 0:
            type_ = flower::HOME;
            break;
        case 1:
            type_ = flower::GARDEN;
            break;
        case 2:
            type_ = flower::WILD;
            break;
        default:
            printf("Incorrect flower. Type cannot be"
                   " less than zero and larger than 2. "
                   "Flower will be randomly generated.\n");
            InRandom();
            break;
    }
}

// Random flower parameters input
void flower::InRandom() {
    length = rand() % 10 + 1;
    name = RandomName(length + 1);
    type_ = static_cast<flower::type>(rand() % 3);
}

void flower::Type(FILE *fOut) {
    switch (type_) {
        case flower::HOME:
            fprintf(fOut, " Type: HOME,");
            break;
        case flower::GARDEN:
            fprintf(fOut, " Type: GARDEN,");
            break;
        case flower::WILD:
            fprintf(fOut, " Type: WILD,");
            break;

    }
}

//------------------------------------------------------------------------------
// Flower parameters output in formative stream
void flower::Out(FILE *fileOut) {
    fprintf(fileOut,
            "It is Flower. Name: %s,",
            name);
    Type(fileOut);
    fprintf(fileOut, " Fraction = %f;\n", Fraction());
}

//------------------------------------------------------------------------------
// Computing flower fraction
double flower::Fraction() {
    int vowels_count = 0;
    for (int i = 0; i < length - 1; i++) {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i'
            || name[i] == 'o' || name[i] == 'u') {
            ++vowels_count;
        }
    }

    return 1.0 * vowels_count / length;
}
