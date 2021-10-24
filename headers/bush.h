#ifndef CSA_HW2_BUSH_H
#define CSA_HW2_BUSH_H

//------------------------------------------------------------------------------
// bush.h - contains bush description and its interface
//------------------------------------------------------------------------------

#include "random.h"
#include "plant.h"

// bush
class bush : public plant {
public:
    virtual ~bush() {}

    // Bush parameters input from file
    virtual void In(FILE *fileIn);

    // Random bush parameters input
    virtual void InRandom();

    void Month(FILE *fileOut);

    // Bush parameters output in formative stream
    virtual void Out(FILE *fileOut);

    // Computing bush fraction
    virtual double Fraction();

private:
    enum month {
        JANUARY = 0,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };
    month month_;
};

#endif //CSA_HW2_BUSH_H
