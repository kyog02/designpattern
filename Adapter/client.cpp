#include "Duck.h"

#include "FlyBehavior.h"
#include "QuackBehavior.h"

#include "TurkeyAdapter.h"

int main()
{
    IDuck* mallard = new MallardDuck(new FlyWithWings(), new Quack() );
    IDuck* model = new ModelDuck( new FlyNoWings() , new MuteQuack() );

    mallard->performFly();
    model->performFly();

    model->SetFlyBehavior( new FlyWithWings() );
    model->performFly();


    /**
     * Adapterパターン。適用する代わりに、今回の場合では、Strategyパターンでアルゴリズムを切り替えられなくなっている。
     */
    IDuck* turkey = new TurkeyAdapter(NULL, NULL);
    turkey->performFly();
    turkey->performQuack();

    return 0;
}