#ifndef IPIZZAH
#define IPIZZAH

#include <iostream>

#include "PizzaIngredientFactory.h"

/**
 * AbstractFactoryパターンで作りたいオブジェクト
 * Factoryクラスをコンストラクタで渡して、実際の生成処理をFactoryクラスに委譲する。
 */
class Pizza
{
public:
    std::string name;
    Dough* dough;
    Sauce* sauce;
    Veggies* veggies;
    Cheese* cheese;
    Pepperoni* pepperoni;
    Clams* clam;

protected:
    PizzaIngredientFactory& ingredientFactory;

public:
    Pizza(PizzaIngredientFactory& ingredientFactory, std::string name):
         ingredientFactory(ingredientFactory)
        ,name(name)
        {}

    virtual void prepare() = 0;

    virtual void bake(){ std::cout << "350度で25分間焼く" << std::endl; };

    virtual void cut(){ std::cout << "ピザを扇形に切り分ける" << std::endl; };

    virtual void box(){ std::cout << "pizzastoreの正式な箱にピザを入れる" << std::endl; };

    void setName(std::string name){ this->name = name; }

    std::string getName(){ return name; }

};

#endif // IPIZZAH