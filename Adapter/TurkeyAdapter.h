#ifndef TURKEYADAPTERH
#define TURKEYADAPTERH

#include "IDuck.h"

#include "Turkey.h"

class TurkeyAdapter: public IDuck
{
    Turkey turkey;
public:
    TurkeyAdapter(IFlyBehavior* fb, IQuackBehavior* qb):IDuck(fb,qb){};

    virtual void performQuack() override { turkey.gobble(); }

    virtual void performFly() override { turkey.fly(); }

    virtual void display() override {std::cout << "七面鳥です。" << std::endl; }

};




#endif //TURKEYADAPTERH