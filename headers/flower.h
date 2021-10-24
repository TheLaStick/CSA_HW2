#ifndef CSA_HW2_FLOWER_H
#define CSA_HW2_FLOWER_H

//------------------------------------------------------------------------------
// flower.h - contains flower description and its interface
//------------------------------------------------------------------------------

# include "random.h"
# include "plant.h"

// flower
class flower: public plant {
public:
    virtual ~flower() {}

    // Flower parameters input from file
    virtual void In(FILE *fileIn);

    void Type(FILE *fileOut);

    // Random flower parameters input
    virtual void InRandom();

    // Flower parameters output in formative stream
    virtual void Out(FILE *fileOut);

    // Computing flower fraction
    virtual double Fraction();
private:
    enum type {
        HOME,
        GARDEN,
        WILD
    };
    type type_;
};

#endif //CSA_HW2_FLOWER_H
