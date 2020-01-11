#ifndef NYPIZZAINGREDIENTFACTORYH
#define NYPIZZAINGREDIENTFACTORYH

// 本クラスのインタフェース
#include "PizzaIngredientFactory.h"

// 本クラスに使用する具象クラス
#include "Ingredients.h"


/**
 * AbstractFactoryパターンでのFactoryクラス
 * 本パターンではPizzaクラスを生成するのが最終目的だが、
 * 本パターンのFactoryクラスでは、直接Pizzaクラスを生成するのではなく、
 * Pizzaクラスを構成する、Pizzaクラスの内部クラスメンバを生成する役割を持つ。
 * 実際はPizzaクラスに本クラスを渡して、Pizzaクラス内の処理から呼ばれることになる。
 * そのおかげで、Pizzaクラスは、Factoryクラスの内部処理に依存する必要がなくなり、
 * Pizzaクラスの内部構造の拡張・修正がやりやくなる。
 */
class NYPizzaIngredientFactory:public PizzaIngredientFactory
{
public:
    virtual Dough* createDough() override { return new ThinCrustDough(); }

    virtual Sauce* createSauce() override { return new MarinaraSauce(); }

    virtual Cheese* createCheese() override { return new ReggianoCheese(); }

    virtual std::vector<Veggies*> createVeggies() override 
    {
        std::vector<Veggies*> veggies = { new Garlic(), new Onion(), new Onion(), new Mushroom(), new Redpepper()};
        return veggies;
    }

    virtual Pepperoni* createPepperoni() override { return new SlicedPepperoni(); }

    virtual Clams* createClam() override { return new FreshClams(); }
};

#endif //NYPIZZAINGREDIENTFACTORYH