#include <iostream>
using namespace std;


/*******************************************************/
// Decoraterパターン
// あるクラスに処理を追加したいが、結合が強く、分割しづらい場合に
// 上からラッパークラスを作って、拡張機能を追加できるようにしたパターン
/*******************************************************/
/*******************************************************/

//------------------------------------------------------
// インターフェース
//------------------------------------------------------
class IComponent
{
public:
    virtual void Something() = 0;
};

/*******************************************************/

//------------------------------------------------------
// 普通のコンポーネント
// 既存処理が入っているクラス
//------------------------------------------------------
class SimpleComponent : public IComponent
{
public:
    void Something() override;
};

void SimpleComponent::Something()
{
    cout << "SimpleComponent::Something" << endl;
}


/*******************************************************/

//------------------------------------------------------
// 拡張したコンポーネント
// この中に拡張処理を入れる。
//------------------------------------------------------
class DecoratorComponent : public IComponent
{
public:
    DecoratorComponent(IComponent* decoratedComponent);
    void Something() override;
    void SomethingElse();

private:
    IComponent* decoratedComponent;
};

DecoratorComponent::DecoratorComponent(IComponent* decoratedComponent)
{
    this->decoratedComponent = decoratedComponent;
}


void DecoratorComponent::Something()
{
    SomethingElse();
    decoratedComponent->Something();
}

void DecoratorComponent:: SomethingElse()
{
    cout << "DecoratorComponent:: SomethingElse" << endl;
}

/*******************************************************/


int main()
{
    IComponent* a = new DecoratorComponent(new SimpleComponent());
    a->Something();
    return 0;
}