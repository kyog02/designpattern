#ifndef PIZZAH
#define PIZZAH

#include "IPizza.h"

/**
 * AbstractFactoryパターンで作りたいオブジェクト
 * Factoryクラスをコンストラクタで渡して、実際の生成処理をFactoryクラスに委譲する。
 * そのおかげで、各メンバクラスの実体に依存する必要がない。
 */
class CheesePizza:public Pizza
{
public:
    CheesePizza(PizzaIngredientFactory& ingredientFactory,std::string name)
    :Pizza(ingredientFactory,name){}

    virtual void prepare() override
    {
        std::cout << name << "を下処理" << std::endl;
         dough = ingredientFactory.createDough();
         sauce = ingredientFactory.createSauce();
         cheese = ingredientFactory.createCheese();
    }
};

class ClamPizza : public Pizza
{
public:
    ClamPizza(PizzaIngredientFactory& ingredientFactory, std::string name)
    :Pizza(ingredientFactory,name){}

    virtual void prepare() override
    {
        std::cout << name << "を下処理" << std::endl;
        dough = ingredientFactory.createDough();
        sauce = ingredientFactory.createSauce();
        cheese = ingredientFactory.createCheese();
        clam = ingredientFactory.createClam();
    }

    virtual void cut() override { std::cout << "ピザをボックス形に切り分ける" << std::endl; };
};

#endif //PIZZAH