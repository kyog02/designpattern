#ifndef FLYBEHAVIORH
#define FLYBEHAVIORH

#include <iostream>

#include "IFlyBehavior.h"

class FlyWithWings:public IFlyBehavior
{
public:
    virtual void Fly(){ std::cout << "飛んでいる。" << std::endl;}
};

class FlyNoWings:public IFlyBehavior
{
public:
    virtual void Fly(){ std::cout << "飛べません。" << std::endl;}
};



#endif //FLYBEHAVIORH