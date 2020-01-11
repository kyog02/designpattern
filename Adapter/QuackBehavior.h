#ifndef QUACKBEHAVIORH
#define QUACKBEHAVIORH

#include <iostream>

#include "IQuackBehavior.h"

class Quack:public IQuackBehavior
{
public:
    virtual void quack() override { std::cout << "ガーガー" << std::endl;}
};

class MuteQuack:public IQuackBehavior
{
public:
    virtual void quack() override { std::cout << "<<沈黙>>" << std::endl;}
};



#endif //QUACKBEHAVIORH