#include "Duck.h"

#include "FlyBehavior.h"
#include "QuackBehavior.h"

int main()
{
    // アルゴリズムを切り替えられるように、Duck側のインタフェースは内部操作のFlyBehavior,QuackBehaviorを
    // ポインタにしている。
    IDuck* mallard = new MallardDuck(new FlyWithWings(), new Quack() );
    IDuck* model = new ModelDuck( new FlyNoWings() , new MuteQuack() );

    mallard->performFly();
    model->performFly();

    // アルゴリズム変更(Strategyパターンで行いたかったこと。)
    model->SetFlyBehavior( new FlyWithWings() );
    model->performFly();

    return 0;
}