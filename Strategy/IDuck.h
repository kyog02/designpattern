#ifndef IDUCKH
#define IDUCKH

#include "IFlyBehavior.h"
#include "IQuackBehavior.h"

class IDuck
{
protected:
    IFlyBehavior* flyBehavior;
    IQuackBehavior* quackBehavior; 
public:
    IDuck(IFlyBehavior* fb, IQuackBehavior* qb)
    :flyBehavior(fb)
    ,quackBehavior(qb){};

    virtual void display() = 0;
    virtual void performFly(){ flyBehavior->Fly(); }
    virtual void performQuack(){ quackBehavior->quack(); }
    void SetFlyBehavior(IFlyBehavior* fb) { flyBehavior = fb; }
    void SetQuackBehavior(IQuackBehavior* qb) { quackBehavior = qb; }
};


#endif //IDUCKH