#ifndef COMMANDH
#define COMMANDH

#include <iostream>

#include "ICommand.h"

class Light
{
public:
    void on(){ std::cout << "Light On" << std::endl; }
    void off(){ std::cout << "Light Off" << std::endl; }
};

class LightOnCommand : public ICommand
{
    Light& light;
public:
    LightOnCommand(Light& light):light(light){}
    virtual void Execute() override { light.on(); }
    virtual void Undo() override { light.off(); }
};

class LightOffCommand : public ICommand
{
    Light& light;
public:
    LightOffCommand(Light& light):light(light){}
    virtual void Execute() override { light.off(); }
    virtual void Undo() override { light.on(); }
};



#endif //COMMANDH