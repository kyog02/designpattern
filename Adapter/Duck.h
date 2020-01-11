
#ifndef DUCKH
#define DUCKH

#include <iostream>

#include "IDuck.h"



class MallardDuck : public IDuck
{
public: 
    MallardDuck(IFlyBehavior* fb, IQuackBehavior* qb):IDuck(fb,qb){};

    virtual void display() override {std::cout << "本物のマガモです。" << std::endl; }
}; 

class ModelDuck : public IDuck
{
public: 
    ModelDuck(IFlyBehavior* fb, IQuackBehavior* qb):IDuck(fb,qb){};

    virtual void display() override {std::cout << "模型のカモです。" << std::endl; }
}; 

#endif //DUCKH