#include "NYPizzaStore.h"

int main()
{
    PizzaStore* nyPizzaStore = new NYPizzaStore();

    nyPizzaStore->orderPizza("チーズ");
    nyPizzaStore->orderPizza("クラム");

    return 0;
}
