#ifndef NYPIZZASTOREH
#define NYPIZZASTOREH

// 本クラスのインタフェース
#include "PizzaStore.h"

// 本クラスに使用するクラス
#include "Pizza.h"
#include "NYPizzaIngredientFactory.h"

class NYPizzaStore: public PizzaStore
{
protected:
    virtual Pizza* createPizza(std::string type)
    {
        Pizza* pizza = NULL;
        PizzaIngredientFactory* ingredientFactory = new NYPizzaIngredientFactory();
        if(type == "チーズ")
        {
            pizza = new CheesePizza(*ingredientFactory,"ニューヨークスタイルチーズピザ");
            //pizza->setName("ニューヨークスタイルチーズピザ");
        }
            
        else if(type == "野菜")
        {
            //pizza = new VeggiesPizza(ingredientFactory,"ニューヨークスタイル野菜ピザ");
            //pizza->setName("ニューヨークスタイル野菜ピザ");
        }

        else if(type == "クラム")
        {
            pizza = new ClamPizza(*ingredientFactory,"ニューヨークスタイルクラムピザ");
            //pizza->setName("ニューヨークスタイルクラムピザ");
        }

        else if(type == "ペパロニ")
        {
            //pizza = new PepparoniPizza(ingredientFactory,"ニューヨークスタイルペパロニピザ");
            //pizza->setName("ニューヨークスタイルペパロニピザ");
        }
        return pizza;
    }
};

#endif //NYPIZZASTOREH