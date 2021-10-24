#ifndef CSA_HW2_TREE_H
#define CSA_HW2_TREE_H

//------------------------------------------------------------------------------
// tree.h - contains tree description and its interface
//------------------------------------------------------------------------------

#include <cstdint>
#include "random.h"
#include "plant.h"

// Tree.
class tree: public plant {
public:
    ~tree() {}

    // Tree parameters input from file
    virtual void In(FILE *fileIn);

    // Random tree parameters input
    virtual void InRandom();

    // Tree parameters output in formative stream
    virtual void Out(FILE *fileOut);

    // Computing tree fraction
    virtual double Fraction();
private:
    // tree age.
    int64_t age;
};

#endif //CSA_HW2_TREE_H
