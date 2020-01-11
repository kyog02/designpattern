#ifndef PIZZASTOREH
#define PIZZASTOREH

#include <iostream>

#include "IPizza.h"

class PizzaStore
{
public:
    Pizza* orderPizza(std::string type)
    {
        Pizza* pizza;
        pizza = createPizza(type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }
protected:
    virtual Pizza* createPizza(std::string type) = 0;
};

#endif //PIZZASTOREH