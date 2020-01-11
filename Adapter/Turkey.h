#ifndef TURKEYH
#define TURKEYH

#include <iostream>

#include "ITurkey.h"

class Turkey: public ITurkey
{
public:
    virtual void gobble(){ std::cout << "ゴロゴロ" << std::endl; }
    virtual void fly(){ std::cout << "短い距離を飛んでいる" << std::endl; };
};




#endif //TURKEYH