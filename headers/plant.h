#ifndef CSA_HW2_PLANT_H
#define CSA_HW2_PLANT_H
//------------------------------------------------------------------------------
// plant.h - contains general plant description
//------------------------------------------------------------------------------

#include "random.h"

//------------------------------------------------------------------------------
// structure, generalizing all available plants
class plant {
protected:
    char* name;
    int length;

public:
    virtual ~plant() {};

    // General plant parameters input from file
    static plant* StaticIn(FILE *fileIn, int key);

    virtual void In(FILE *fileIn) = 0;

    // Random general plant input
    static plant* StaticInRandom();

    virtual void InRandom() = 0;

    // General tree parameters output into a stream
    virtual void Out(FILE *fileOut) = 0;

    // Computing division number of vowels with general name length
    virtual double Fraction() = 0;

};
#endif //CSA_HW2_PLANT_H
